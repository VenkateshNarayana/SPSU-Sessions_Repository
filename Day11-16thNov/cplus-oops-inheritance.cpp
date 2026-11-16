/******************************************************************************
OOPS - Inheritance
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
class Person{
    public :
        void showInfo(){
            cout<<"Base Class call"<<endl;
        }
    
};
class Student : public Person{
    public :
        // void showInfo() {
        //     cout<<"Derived Class call"<<endl;
        // }
};
int main()
{
    cout<<"OOPS-Inheritance"<<endl;
    Person p1;
    Student s1;
    
    // p1.showInfo();
    s1.showInfo();
    
    return 0;
}