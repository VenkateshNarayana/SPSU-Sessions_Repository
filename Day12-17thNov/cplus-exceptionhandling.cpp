/******************************************************************************
Exception - Error Handling using try, catch and throw keyword
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    try
    {
        int age;
        cout<<"Enter age: ";
        cin>>age;
        if (age < 18){
            throw age;
        }else{
            cout<<"Valid age.Proceed for voting..."<<endl;
        }
    }
    catch (int value){
        cout << "Invalid age: " << value;
    }
    return 0;
}