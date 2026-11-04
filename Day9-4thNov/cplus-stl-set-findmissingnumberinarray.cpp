/******************************************************************************
STL - Set- Find the Missing Numbers in a Range
*******************************************************************************/
#include <iostream>
#include <set>
using namespace std;
int main()
{
    cout<<"Find the Missing Numbers in a Range using set"<<endl;
    int arr[]= {1,2,5,6,8}; 
    int size = sizeof(arr)/sizeof(int);
    int N=8;
    set<int> s1={arr,arr+size};
    cout<<"Missing numbers: ";
    for (int i=1;i<N;i++){
        if(s1.find(i)==s1.end()){
            cout<<i<< " "; //this is not found so print it as missing
        }    
    }
    return 0;
}