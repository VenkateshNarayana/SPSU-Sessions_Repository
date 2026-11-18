/******************************************************************************
Difference of Object creation - standard vs using new keyword

*******************************************************************************/
#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called" << endl;
    }

    ~Demo() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    cout << "Creating standard object" << endl;
    {
        Demo d1;
    }

    cout << "Creating dynamic object" << endl;

    Demo* d2 = new Demo();

    cout << "Deleting dynamic object" << endl;

    delete d2;

    cout << "End of program" << endl;

    return 0;
}
