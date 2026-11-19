/******************************************************************************
Inheritance - Why And When To Use "Inheritance" and "Polymorphism"?
- Inheritance lets you reuse attributes and methods of an existing class when you create a new class.
- Polymorphism lets related classes share the same method name, while each class does the work in its own way.

In the example above, we call animalSound() directly on each object, so C++ always knows which version to use. 
Next , you will see what happens when you call it through a pointer to the Animal class, 
and why you then need virtual functions.

Now it works! Because animalSound() is virtual, the call uses the actual object's function and not just the pointer type.

Use virtual only in the base class
Use override (optional, but recommended) in the derived class for clarity

*******************************************************************************/
#include <iostream>
using namespace std;
//Base class
class Animal{
  public:
    //Example (With virtual keyword)
    virtual void sound() {
      cout << "The animal makes a sound \n";
    }
};

//Derived class
class Dog : public Animal{
  public:
    void sound() override {
      cout << "Bow Bow \n";
    }
};
// Derived class
class Pig : public Animal {
  public:
    void sound() {
      cout << "wee wee \n";
    }
};
int main()
{
    cout<<"Inheritance-Simple"<<endl;
    Animal a1;
    Dog d1;
    Pig p1;
    
    a1.sound();
    d1.sound();
    p1.sound();
    
    Animal* aptr=&d1; //this is also required to make runtime Polymorphism
    
    //Now it works! Because animal sound() method is made virtual
    // aptr->sound(); //Even though a points to a Dog, it still calls Animal's animalSound(), because the function is not virtual.
    (*aptr).sound();
    //The -> operator is used to access members (like functions or variables) through a pointer.
    //It's a shortcut for writing (*pointer).member
    //Dog myDog;
    //Animal* a = &myDog;
    // a->sound();  // Same as (*a).sound();
    
    return 0;
}