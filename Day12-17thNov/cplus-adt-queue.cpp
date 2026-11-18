/******************************************************************************
OOPS - ABSTRACT Classes - Create Queue ADT 
*******************************************************************************/
#include <iostream>
using namespace std;
class Queue{
    public:
        virtual void enqueue(int value)=0; //pure virtual functions (a function without body)
        virtual void dequeue()=0;
        virtual int peekFront()=0;
        virtual int peekBack()=0;
        virtual bool isEmpty()=0;
        virtual void traverse()=0;
};

class QArray:public Queue{
    private:
        int size = 10;
        int q[10];
        int front;
        int rear;
    
    public:    
        QArray(){
            front = -1;
            rear  = -1;
        }
        
        void enqueue(int value)override{
            if(rear==size){
                cout<<"Queue is full,cannot perform enqueue...."<<endl;
                return;
            }
            // if(front==-1){
            //     front = 0;
            // }
            q[++rear] = value; //insert at the next available index of Queue array
            if(rear==0) front = 0;//keep the front and rear to the first element
        }
            
        void dequeue() override{
            if(isEmpty()){
               cout<<"Queue is empty.cannot perform dequeue...."<<endl;
               //reset
               front = -1;
               rear  = -1;
               return;
            }
            front++; //increment the front by 1
        }
        int peekBack() override{
            if(isEmpty()){
               cout<<"Queue is empty.cannot perform peekBack...."<<endl;
               return -1;
            }
            return q[rear];
        }
        int peekFront() override{
            if(isEmpty()){
               cout<<"Queue is empty.cannot perform peekFront..."<<endl;
               return -1;
            }
            return q[front];
        }
        bool isEmpty() override{
            return (front>rear || rear==-1);
        }
        void traverse() override{
            if(isEmpty()){
               cout << "queue elements: {empty}"<<endl;
               return ;
            }
            cout << "queue elements: ";
            for(int i=front;i<=rear;i++){
                cout<<q[i]<< " ";
            }
            cout<<endl;
        }
};

int main()
{
    cout<<"Abstract Class - Queue ADT "<<endl;
    // Queue q1; //is this valid? because stack is an abstract class
    QArray qa1;
    qa1.enqueue(10);
    qa1.enqueue(20);
    qa1.enqueue(30);
    cout<<"Front="<<qa1.peekFront()<<endl;
    cout<<"Back ="<<qa1.peekBack()<<endl;
    
    qa1.traverse();
    
    qa1.dequeue();
    qa1.traverse();
    qa1.dequeue();
    qa1.traverse();
    qa1.dequeue();
    qa1.traverse();
    qa1.dequeue();
    qa1.traverse();
    
    return 0;
}