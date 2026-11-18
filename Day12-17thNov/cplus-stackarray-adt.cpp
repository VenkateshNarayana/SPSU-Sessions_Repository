/******************************************************************************
OOPS - Abstract Classes
*******************************************************************************/
#include <iostream>
using namespace std;

class Stack{
    public :
        virtual void push(int val)=0;
        virtual void pop()=0;
        virtual int peek()=0;
        virtual void traverse()=0;
        virtual ~Stack(){}
};
class StackArray:public Stack{
    private:
        int top;
        int size;
        int* stack; //int stack[]; cannot use this syntax bcos it needs size so we use a pointer
    public:
        StackArray(){
            this->top = -1;
            this->size = 5;
            this->stack = new int[size];
        }
        StackArray(int size){
            this->top = -1;
            this->size = size;
            this->stack = new int[size];
        }
        void push(int val) override{
            this->stack[++top] = val;
            // cout<<"push successful"<<endl;
        }
        void pop() override{
            this->stack[top--];
            // cout<<"pop successful"<<endl;
        }
        int peek() override{
            return this->stack[top];
        }
        void traverse() override{
            // cout<<"Stack elements: " ;
            for(int i=this->top;i>=0;i--){
                cout<< this->stack[i]<<" ";
            }
            cout<<endl;
        }
        
        // Destructor
        ~StackArray() {
            delete[] stack;
        }
};
int main()
{
    cout<<"Stack-Using Array"<<endl;
    StackArray st1(10);
    st1.push(10);
    cout<<"Peek:" <<st1.peek()<<endl;
    st1.push(20);
    cout<<"Peek:" <<st1.peek()<<endl;
    st1.push(30);
    cout<<"Peek:" <<st1.peek()<<endl;
    
    cout<<"After push(traversing):";
    st1.traverse();
    
    st1.pop();
    cout<<"After pop(traversing):";
    st1.traverse();
    return 0;
}