/******************************************************************************
static vs local
*******************************************************************************/
#include <iostream>
using namespace std;
int z=25; //local or static or ?? global
void fun1(){//function definition
    static int x=1; //static variable
    int y = 5; //local variable
    cout<<"local y="<<y++<< " Static x="<<x++<< " global="<<z++<<endl;
}

class Demo{
    
    public:
        static int x; //static member 
        int y;        //non-static member
        Demo(){
            x++;
            y=0;
            y++;
        }
        void display(){
            cout<<"static x="<<x<< " non static y="<<y <<endl;
        }
};

// Definition and initialization of static variable
int Demo::x = 0;

int main()
{
    cout<<"Static vs Non Static Members"<<endl;
    Demo d1;
    d1.display();
    Demo d2;
    d1.display();
    Demo d3;
    d1.display();
    
    cout<<"End of program"<<endl;
    
    return 0;
}