/******************************************************************************
Inheritance - Private

*******************************************************************************/
#include <iostream>
using namespace std;

class Parent {
public:
    int a = 10;
    void get_c(){
        cout<<"private:"<<c<<endl;
    }
protected:
    int b = 20;

private:
    int c = 30;
};

class Child : private Parent {
public:
    void display() {
        cout << a << endl; // Allowed
        cout << b << endl; // Allowed
        // cout << c << endl; // Error
        this->get_c();
    }
};

int main() {
    Child obj;

    obj.display();

    // cout << obj.a << endl; // Error
    // cout << obj.b << endl; // Error

    return 0;
}
