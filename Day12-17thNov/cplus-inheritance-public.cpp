/******************************************************************************
Inheritance - Public Inheritance
*******************************************************************************/
#include <iostream>
using namespace std;

class Parent {
public:
    int a = 10;

protected:
    int b = 20;

private:
    int c = 30;
};

class Child : public Parent {
public:
    void display() {
        cout << a << endl; // public is Allowed
        cout << b << endl; // protected is also Allowed
        // cout << c << endl; // private is not allowed ->Error
    }
};

int main() {
    Child obj;

    obj.display();

    cout << obj.a << endl; // Allowed
    // cout << obj.b << endl; // Error
    // cout << obj.c << endl; // Error

    return 0;
}
