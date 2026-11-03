/******************************************************************************
STL - Queue
*******************************************************************************/
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    cout<<"STL-Queue"<<endl;
    cout<<"Palindrome Check"<<endl;
    deque<int> dq = {10,20,0,30,20,10};
    bool is_palindrome=true;
    while(dq.size()>1){
        cout<<dq.front()<<" "<<dq.back()<<endl;
        if (dq.front()!=dq.back()){
            is_palindrome=false;
            break;
        }
        dq.pop_front();
        dq.pop_back();
    }
    cout<<((is_palindrome)?"Palindrome":"Not Palindrome")<<endl;
    
    return 0;
}