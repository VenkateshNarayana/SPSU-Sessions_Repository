/******************************************************************************
Tree - Non Linear Data Structure

Important: In a Binary Search Tree, inorder traversal always produces values in sorted ascending order, 
provided duplicates are handled consistently.
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
class TreeNode{
    public :
        int data;
        TreeNode* left;
        TreeNode* right;
    TreeNode(int value){
        this->data = value;
        this->left = nullptr;
        this->right= nullptr;
    }
};
class BST{
    private :
        TreeNode* root;
        TreeNode* insertNode(TreeNode* node,int value){
            if(node==nullptr){
                return new TreeNode(value);
            }
            if(value>node->data){
                node->right = insertNode(node->right,value);
            }else{
                node->left = insertNode(node->left,value);
            }
            
            return node;
        }
        //recursive inorder traversal
        void inorderTraversal(TreeNode* node) {
            if (node == NULL) return;
            inorderTraversal(node->left);
            cout<<node->data<< " ";
            inorderTraversal(node->right);
        }
        TreeNode* searchKey(TreeNode* node,int key){
            if (node == nullptr) return nullptr;

            if (key == node->data) return node;
            
            if(key<node->data){
                return searchKey(node->left,key);
            }
            return searchKey(node->right,key);
        }
        TreeNode* findMin(TreeNode* node){
            if(node==NULL) return NULL;
            while(node->left!=nullptr){
                node = node->left;
            }
            return node;
        }
        TreeNode* deleteNode(TreeNode* node,int key){
            if (node == nullptr) return nullptr;
            if(key<node->data){
                node->left = deleteNode(node->left,key);
            }else if(key>node->data){
                node->right = deleteNode(node->right,key);
            }else if (key == node->data){
                //case 1 and 2
                if (node->left == NULL) {
                    TreeNode* temp = node->right;
                    delete node;
                    return temp;
                }
                if (node->right == NULL) {
        
                    TreeNode* temp = node->left;
                    delete node;
                    return temp;
                }
                // Case 3: Two children

                TreeNode* temp = findMin(node->right);
                node->data = temp->data;
                node->right = deleteNode(node->right, temp->data);
            }

            return node;

        }
        
        // Deallocate all nodes
        void deleteTree(TreeNode* node) {
    
            if (node == nullptr)
                return;
            //postorder traversal (deleting the root node in the last)
            deleteTree(node->left);
            deleteTree(node->right);
    
            delete node;
        }

    public :        
    
        BST(){
            this->root = nullptr;
        }
        void insert(int value){
            root = insertNode(root,value);
        }
        void inorder(){
            inorderTraversal(root);
            cout<<endl;
        }
        void search(int key){
            cout << "search key: "<<key<<" "<< (searchKey(root,key)==NULL?"Not Found":"Found")<<endl;
        }
        void deleteKey(int key){
            if (searchKey(root, key) == nullptr) {
                cout << "Node: " << key << " Not Found." << endl;
                return;
            }

            root = deleteNode(root, key);
            cout << "Node " << key << " Deleted Successfully." << endl;
        }
        ~BST(){
            cout<<"Deallocated the nodes of tree successfully"<<endl;
            deleteTree(root);
        }
};
int main()
{
    cout<<"Hello World - Tree Data Structure"<<endl;
    BST bstObj;
    
    int arr[7] = { 27, 14, 35, 10, 19, 31, 42 };
    for(int i = 0; i < 7; i++){
        bstObj.insert(arr[i]);
    }
    cout<<"Inorder traversal: ";
    bstObj.inorder();
    
    //perform search
    bstObj.search(14);
    
    
    bstObj.search(11);
    
    //perform delete
    bstObj.deleteKey(35);
    
    cout<<"Inorder traversal: ";
    bstObj.inorder();
    
    
    return 0;
}