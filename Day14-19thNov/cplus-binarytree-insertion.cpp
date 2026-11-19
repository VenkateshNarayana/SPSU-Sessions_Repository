/******************************************************************************
 Creating Binary Tree - Using Linked List (TreeNode)
*******************************************************************************/
#include <iostream>
#include <queue>
using namespace std;

class TreeNode{
    public:
        int       data;
        TreeNode* left;
        TreeNode* right;
        
        TreeNode(int value){
            this->data = value;
            this->left = NULL;
            this->right = NULL;
        }
        TreeNode(int value,TreeNode* left,TreeNode* right){
            this->data = value;
            this->left = left;
            this->right = right;
        }
};

class BinaryTree{
    private:
        TreeNode* root;
    public:
        BinaryTree(){
            root = NULL;
        }
        //perform insert
        void insert(int value){
            TreeNode* newTreeNode = new TreeNode(value);
            //check the root
            if(root==NULL){
                root = newTreeNode;
                return;
            }
            //put the root in a queue
            queue<TreeNode*> q;
            q.push(root);
            while(!q.empty()){
                TreeNode* currNode = q.front();
                q.pop();
                if(currNode->left==nullptr){
                    currNode->left = newTreeNode;
                    return;
                }else{
                    q.push(currNode->left);
                }
                
                if(currNode->right==nullptr){
                    currNode->right = newTreeNode;
                    return;
                }else{
                    q.push(currNode->right);
                }
            }
        }
        //perform level order traversal
        void levelOrderTraversal(){
            //check the root
            if(root==NULL){
                cout<< "Tree is empty"<<endl;
                return;
            }
            
            //put the root in a queue
            queue<TreeNode*> q;
            q.push(root);
            while(!q.empty()){
                TreeNode* currNode = q.front();
                q.pop();
                cout<< currNode->data << " ";
                if(currNode->left!=nullptr){
                    q.push(currNode->left);
                }
                
                if(currNode->right!=nullptr){
                    q.push(currNode->right);
                }
            }
            cout<<""<<endl;
        }
};

int main()
{
    cout<<"Hello World-Binary Tree Insertion and Level Order Traversal"<<endl;
    BinaryTree btObj;
    //perform insertion
    btObj.insert(10);
    btObj.insert(20);
    btObj.insert(30);
    btObj.insert(40);
    btObj.insert(50);
    btObj.insert(60);
    
    //perform traversal
    btObj.levelOrderTraversal();
    
    return 0;
}