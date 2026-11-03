/******************************************************************************
Daily Temperature-	Monotonic decreasing stack
*******************************************************************************/
#include <iostream>
#include <stack>
#include <climits>
using namespace std;
int main()
{
    cout<<"Daily Temperature - Monotonic stack"<<endl;
    stack<int> st1;
    int temp[] = {73, 74, 75, 71, 69, 72, 76, 73};
    int size = sizeof(temp)/sizeof(int);
    int res[size] ={0};
    cout<<"Daily Temp: ";
    for(int i=0;i<size;i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<size;i++){
        while(!st1.empty() && temp[i]>temp[st1.top()]){
            res[st1.top()] =  i - st1.top();
            st1.pop();
        }
        st1.push(i);
    }
    cout<<"Waiting(Days) : ";
    for(int i=0;i<size;i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}