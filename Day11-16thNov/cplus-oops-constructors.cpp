/******************************************************************************
OOPs - Types of Constructors
a. Default (non-parameterised)
b. Parameterised 
c. Copy
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
class Teacher{
    public:
        string name;
        string dept;
        string subject;
        double salary;
    Teacher(){
        name = "NA";
        dept = "NA";
        subject = "NA";
        salary = 0.0;
    }
    Teacher(string name,string dept,string subject,double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
    Teacher(const Teacher& obj){
        this->name = obj.name;
        this->dept = obj.dept;
        this->subject = obj.subject;
        this->salary = obj.salary;
    }
    
    void changeDept(string newDept){
        dept = newDept;
    }
    void showInfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Dept:"<<dept<<endl;
        cout<<"Subject:"<<subject<<endl;
        cout<<"Salary:"<<salary<<endl;
    
    }
};
int main()
{
    cout<<"OOPS-CLASSES AND OBJECTS"<<endl;
    cout<<"Creating objects using standard syntax"<<endl;
    Teacher t1; //t1 is an object of the Teacher class.
                //We access members using the dot (.) operator.
                //The object is automatically destroyed when it goes out of scope.
    t1.name = "Ranjit";
    t1.dept = "CSE";
    t1.subject = "Network";
    t1.salary  = 2500000;
    t1.showInfo();
    
    //creating object using parameterised constructor
    cout<<"Creating object using parameterised constructor"<<endl;
    Teacher t3("Jitin","CSE","WEB",250000);
    t3.showInfo();
    
    //creating object using copy constructor
    cout<<"Creating using copy constructor"<<endl;
    Teacher t4(t3);//Creates an object dynamically and returns its address, which is stored in a pointer.
    t4.showInfo();
    
    return 0;
}