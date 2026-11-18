/******************************************************************************
Linked List
*******************************************************************************/
#include <iostream>
using namespace std;
class Node{
    public :
        int data;
        Node* next;
        Node(){
            data  = 0;
            next  = nullptr;
        }
        Node(int value){
            data = value;
            next = nullptr; //NULL
        }
};
class LinkedList{
    private:
        Node* head;
        Node* tail;
    public :
        LinkedList(){
            head = NULL;
            tail = nullptr;
        }
        void insertAtHead(int value){
            //create the Node
            Node* newNode = new Node(value);
            if(head==NULL){
                head = newNode;
                tail = newNode;
            }else{
                newNode->next = head;
                head = newNode;
            }
        }
        void insertAtTail(int value){
            //create the Node
            Node* newNode = new Node(value);
            if(head==NULL){
                head = newNode;
                tail = newNode;
            }else{
                tail->next = newNode;
                tail = newNode;
            }
        }
        void deleteAtHead(){
            if(head==NULL){
                cout<<"List is empty...cannot perform delete"<<endl;
            }else if(head->next==NULL){
                //this is the only node
                delete head;
                head = nullptr;
                tail = nullptr;
            }else{
                Node* temp = head;
                //move the head to next Node
                head = head->next;
                //delete the temp(old head)
                delete temp;
            }
        }
        void deleteAtTail(){
            if(head==NULL){
                cout<<"List is empty...cannot perform delete"<<endl;
            }else if(head->next==NULL){
                //this is the only node
                delete head;
                head = nullptr;
                tail = nullptr;
            }else{
                Node* temp = head;
                //traverse to one node before tail
                while(temp->next!=tail){
                    temp = temp->next;
                }
                //delete the old tail because new tail is temp
                delete tail;
                //put null in new tail(temp)
                temp->next=NULL;
                tail = temp;
            }
        }
        void reverse(){
            Node* curr=head; 
            Node* prev=NULL;
            Node* next;
            tail = head;
            while(curr!=NULL){
                //store the next 
                next = curr->next;
                
                //reverse of the pointer of curr
                curr->next = prev;
                
                //move pointers one step ahead`
                prev = curr;
                curr = next;
            }
            head = prev; //this becomes my new head
        }
        void traverse(){
            Node* temp = head;
            cout<<"My list:";
            while(temp!=NULL){
                cout<<temp->data << " ";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
           
        }
};

int main()
{
    cout<<"Linked List"<<endl;
    // Node n1,n2,n3,n4;
    
    // n1.data = 10;
    // n1.next = &n2;
    // n2.data = 20;
    // n2.next = &n3;
    // n3.data = 30;
    // n3.next = &n4;
    // n4.data = 40;
    // n4.next = NULL;
    LinkedList list1;
    list1.insertAtHead(10);
    list1.insertAtHead(20);
    list1.insertAtHead(30);
    list1.traverse();
    
    list1.insertAtTail(40);
    list1.insertAtTail(50);
    list1.traverse();
    
    //reverse the list
    cout<<"Reverse ";
    list1.reverse();
    list1.traverse();
    
    //perform deletion operation
    list1.deleteAtHead();
    list1.traverse();
    
    list1.deleteAtTail();
    list1.traverse();
    
    return 0;
}