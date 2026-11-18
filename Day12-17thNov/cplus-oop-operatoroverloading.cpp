/******************************************************************************
Operator Overloading
You already know that the + operator does different things for different types. 
It can be used to add two numbers, and to join two strings.
But for your own classes, C++ does not know what + should do. 
With operator overloading, you decide what an operator does for objects of your class.

To overload an operator, create a method called operator followed by +, like operator+:
*******************************************************************************/
#include <iostream>
using namespace std;
class Point{
    public : 
        int x, y;
    Point(int x, int y){
        this->x = x;
        this->y = y;
    }
    //Overload + to perform addition of 2 point objects
    Point operator+(Point other){
        return Point(x+other.x,y+other.y);
    }
    //Overload == to compare 2 point objects
    bool operator==(Point other) {
      return (x == other.x && y == other.y);
    }
    //Print Objects with << 
    friend ostream& operator<<(ostream& out,Point p){
        out<< "(" << p.x << "," << p.y << ")";
        return out;
    }
    
    void display(){
        cout<<"Point=("<<(*this).x <<"," <<this->y<<")"<<endl;
    }
};
int main()
{
    cout<<"OOP-Operator Overloading"<<endl;
    Point p1(3,4),p2(5,6);
    p1.display();
    p2.display();
    
    cout<<"Adding p1+p2"<<endl;
    
    Point p3 = p1 + p2;
    
    p3.display();
    
    
    if(p1 == p2) {
        cout<<"p1 and p2 are same"<<endl;
    }else{
        cout<<"p1 and p2 are not same"<<endl;
    }
    
    // return 0;
}