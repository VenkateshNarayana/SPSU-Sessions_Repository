/******************************************************************************
OOPS-Abstract Classes
In the Polymorphism chapter, the Animal class had an Sound() function that printed "The animal makes a sound". 
But a general animal does not really make one sound. Each kind of animal makes its own.

In cases like this, you can make the function pure virtual. A pure virtual function has no body. 
Instead, you write = 0 after it:

Why Use Abstract Classes?
An abstract class describes what all the derived classes can do, without saying how. 
This lets you handle different objects in the same way, 
for example in a loop, with pointers to the abstract class:

Example
Pig myPig;
Dog myDog;
Animal* animals[2] = {&myPig, &myDog};

for (Animal* a : animals) {
  a->sound();
}
The loop does not need to know if an animal is a pig or a dog. 
It just calls animalSound(), and each object runs its own version.
*******************************************************************************/
#include <iostream>
using namespace std;

//A class with at least one pure virtual function is called an abstract class. 
//Every class that inherits from it must have its own version of the function

class Animal {
  public:
    virtual void sound() = 0; //pure virtual function
};

class Pig : public Animal {
  public:
    void sound() override {
      cout << "wee wee\n";
    }
};

class Dog : public Animal {
  public:
    void sound() override {
      cout << "bow wow\n";
    }
};
int main(){
    cout<<"OOPS-Abstract Classes"<<endl;
    
    //You Cannot Create Objects of an Abstract Class
    //An abstract class is not complete, because one of its functions has no body. 
    //So you cannot create an object of it. You can only create objects of the derived classes:
    // Animal a1; //Error

    Pig myPig;
    Dog myDog;
    myPig.sound();
    myDog.sound();
    
    return 0;
}