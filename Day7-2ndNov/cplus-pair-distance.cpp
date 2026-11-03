/******************************************************************************
Pair
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout<<"STL-Pairs - Finding distance between 2 coordinates usig pair"<<endl;
    pair<int,int> p_cord1={2,4}; //p1 (x1,y1)
    pair<int,int> p_cord2={5,8}; //p2 (x2,y2)
    
    int distance = sqrt(pow((p_cord2.first - p_cord1.first),2) + pow((p_cord2.second - p_cord1.second),2));
    cout<<"distance = "<<distance;
    
    return 0;
}