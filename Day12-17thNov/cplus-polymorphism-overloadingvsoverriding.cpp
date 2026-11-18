/******************************************************************************
OOPS - Overloading
*******************************************************************************/
#include <iostream>
using namespace std;
class Utility{
    public :
        int add(int a , int b){
            int sum = a+b;
            cout<<"int 2 parameters"<<endl;
            return (sum); 
        }
        int add(int a, int b, int c){
            int sum = a+b+c;
            cout<<"int 3 parameters"<<endl;
            return (sum); 
        }
        double add(double a, double b, double c){
            double sum = a+b+c;
            cout<<"double 3 parameters"<<endl;
            return (sum); 
        }
};

class Animal{
    public:
        virtual void sound(){
            cout<<"animal sound"<<endl;
        }
};

class Dog:public Animal{
    public:
        void sound() override{
            cout<<"bow bow"<<endl;
        }
};
class Bird:public Animal{
    public:
        void fly(){
            cout<<"Bird flies"<<endl;
        }
};
class Cat:public Animal{
    public:
        void sound(){
            cout<<"meow meow"<<endl;
        }
};

int main()
{
    cout<<"OOPS-Function Overloading vs Overriding"<<endl;
    // Utility utObj;
    
    // cout <<"Sum 2=" << utObj.add(2,3)<<endl;
    // cout <<"Sum 3=" << utObj.add(2,3,6)<<endl;
    // double sum = utObj.add(2.0,3.0,6.0);
    // cout <<"Sum 3=" << sum <<endl;
    
    Animal a;
    
    Dog d;
    Cat c;
    Bird b;
    Animal* ptr_a[] = {&d,&c,&b};
    for(auto ptr : ptr_a){
        ptr->sound();
    }   
    
    // ptr_a->sound();
    
    // Animal* a_obj = new Animal;
    // a_obj->sound();
    // (*a_obj).sound();
    
    
    // b.sound();
    // a.sound();
    // d.sound();
    // c.sound();
    
    return 0;
}