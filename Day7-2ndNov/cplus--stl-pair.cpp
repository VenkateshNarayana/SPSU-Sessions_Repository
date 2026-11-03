/******************************************************************************
STL - Pair
*******************************************************************************/
#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int main()
{
    cout<<"STL-Pair"<<endl;
    pair<int,int> p1,p2;
    cout<<"Enter the coordinates of p1: ";
    cin>>p1.first>>p1.second;
    
    cout<<"Enter the coordinates of p2: ";
    cin>>p2.first>>p2.second;
    
    cout<<"Distance d = ";
    cout<<sqrt(pow((p2.first - p1.first),2) + pow((p2.second-p1.second),2));
    
    cout<<endl;
    return 0;
}