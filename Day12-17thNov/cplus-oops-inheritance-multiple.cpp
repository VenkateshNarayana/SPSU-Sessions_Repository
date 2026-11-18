/******************************************************************************
OOPS - Inheritance - Multiple
Parent1::display();
        Parent2::display();
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
class Parent1{
    public:
        void display(){
            cout<<"Display Parent1 Function"<<endl;
        }
};
class Parent2{
    public:
        void display(){
            cout<<"Display Parent2 Function"<<endl;
        }
};
class Child:public Parent1,public Parent2{
    public : 
    void display(){
        Parent1::display();
        Parent2::display();
        cout<<"Child display Function"<<endl;
    }
};
int main()
{
    cout<<"Inheritane Multiple"<<endl;
    cout<<"Child 1"<<endl;
    Child c1;      //create object of Child inheriting Parent1 and Parent2
    c1.display();  //call member function
    
    return 0;
}