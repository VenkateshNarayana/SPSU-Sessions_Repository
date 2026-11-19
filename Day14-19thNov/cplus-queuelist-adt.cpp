/******************************************************************************
Stack ADT - Creating Queue using Linked List

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
class Queue{
    public:
        virtual void enqueue(int value)=0; //pure virtual functions (a function without body)
        virtual void dequeue()=0;
        virtual void peekFront()=0;
        virtual void peekBack()=0;
        virtual bool isEmpty()=0;
        virtual void traverse()=0;
};
class QList : public Queue{
    private:
        Node* head;
        Node* tail;
    public :
        QList(){
            head = NULL;
            tail = nullptr;
        }
        void enqueue(int value)override{
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
        void dequeue()override{
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
        void peekFront()override{
            if(isEmpty()) 
                cout<<"Front: {empty}"<<endl;
            else
                cout<<"Front:"<<head->data<<endl;
        }
        void peekBack()override{
            if(isEmpty()) 
                cout<<"Back: {empty}"<<endl;
            else
                cout<<"Back:"<<tail->data<<endl;
        }
        bool isEmpty()override{
            return (head==NULL);
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
        ~QList(){
            if(head!=NULL){
                Node* temp = head;
                while(head!=NULL){
                    head = head->next;
                    delete temp;
                    temp = head;
                }
                tail = NULL;
                cout<<"Deallocted all nodes successfully..."<<endl;
            }
        }
};
int main()
{
    cout<<"Hello World-Queue using Linked List"<<endl;
    QList ql1;
    //perform push
    ql1.enqueue(10);
    //perform peek
    ql1.peekFront();
    ql1.peekBack();
    
    ql1.enqueue(20);
    ql1.enqueue(30);
    ql1.enqueue(40);
    //perform traverse
    ql1.traverse();
    
    //perform pop
    ql1.dequeue();
    ql1.peekFront();
    ql1.peekBack();
    
    //perform traverse
    ql1.dequeue();
    ql1.traverse();
    
    return 0;
}