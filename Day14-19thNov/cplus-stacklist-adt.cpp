/******************************************************************************
Stack ADT - Creating stack using Linked List

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
class Stack{
    public :
        virtual void push(int val)=0;
        virtual void pop()=0;
        virtual int peek()=0;
        virtual bool isEmpty()=0;
        virtual void traverse()=0;
        virtual ~Stack(){}
};
class StackList : public Stack{
    private:
        Node* head;
        Node* tail;
    public :
        StackList(){
            head = NULL;
            tail = nullptr;
        }
        void push(int value) override{
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
        
        void pop() override{
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
        bool isEmpty(){
            return (head==nullptr);
        }
        int peek() override{
            if(head==NULL){
                return -1;
            }else{
                return head->data;
            }
        }
        void traverse() override{
            Node* temp = head;
            cout<<"My list:";
            while(temp!=NULL){
                cout<<temp->data << " ";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }
        //destructor
        ~StackList(){
            if(head!=NULL){
                Node* temp = head;
                while(head!=NULL){
                    head = head->next;
                    delete temp;
                    temp = head;
                }
                tail = NULL;
                cout<<"Deallocted all nodes"<<endl;
            }
        }
};
int main()
{
    cout<<"Hello World-Stack using Linked List"<<endl;
    StackList stl1;
    //perform push
    stl1.push(10);
    //perform peek
    cout<<"Peek:"<<stl1.peek()<<endl;
    stl1.push(20);
    stl1.push(30);
    stl1.push(40);
    //perform traverse
    stl1.traverse();
    
    //perform pop
    stl1.pop();
    cout<<"Peek:"<<stl1.peek()<<endl;
    
    //perform traverse
    stl1.pop();
    stl1.traverse();
    
    return 0;
}