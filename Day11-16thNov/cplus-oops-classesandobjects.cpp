/******************************************************************************
OOP - Classes and Objects
CLass is a blueprint of an Object.
Object is a real world entity which comprise of data and functions 
or characteristic features and characteristic behaviour
or properties and method
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
class Teacher{
        string name;
        string dept;
        string subject;
        double salary;
        
    public :
        Teacher(){
            name    = "NA";
            dept    = "NA";
            subject = "NA";
            salary = 0.0;
        }    
        Teacher(string name,string dept,string subject,double salary){
            this->name    = name;
            this->dept    = dept;
            this->subject = subject;
            this->salary = salary;
        }
        void changeDept(string newDept){
            dept = newDept;
        }
        void showInfo(){
            cout<<"Teacher Name:"<<name<<endl;
            cout<<"Dept   :"<<dept<< " Subject:" <<subject<< endl;
            cout<<"Salary :"<<salary<<endl;
        }
};

int main()
{
    cout<<"OOPS"<<endl;
    Teacher t1,t2("Diya","ECE","ELECTRIC",50000);
    
    t1.showInfo();

    t2.showInfo();
    t2.changeDept("CSE");
    
    t2.showInfo();
    
    return 0;
}