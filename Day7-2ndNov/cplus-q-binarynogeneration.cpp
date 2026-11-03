/******************************************************************************
STL - QUeue - Generate Binary numbers
*******************************************************************************/
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
    cout<<"STL-Queue"<<endl;
    queue<string> q;
    int n;
    cout<<"Enter the no of binary numbers to Generate: ";
    cin>>n;
    //insert operations
    q.push("1");
    
    cout<<"Binary numbers: ";
    for(int i=1 ;i <=n ;i++){
        string temp = q.front();
        cout<< temp << " ";
        q.pop(); //after popping add the next 2 binary numbers by appending 0 and 1 respectively     
        //append 0
        q.push(temp+"0");
        //append 1
        q.push(temp+"1");
    }
    cout <<endl;
    return 0;
}