/******************************************************************************
Using pair to solve the Daily temperature - monotonic stack 
*******************************************************************************/
#include <iostream>
#include <stack>
using namespace std;

void traverse(int temp_arr[],int size){
    for(int i=0;i<size;i++){
        cout<<temp_arr[i]<<" ";
    }
    cout<<endl;
}
void empty_stack(stack<pair<int,int>> mstack){
    while(!mstack.empty()){
        cout<<mstack.top().first<<" ";
        mstack.pop();
    }
    cout<<endl;
}
int main()
{
    cout<<"STL-Using Pair in a monotonic stack"<<endl;
    int temp[] = {73, 74, 75, 71, 69, 72, 76, 73};
    int size = sizeof(temp)/sizeof(int);
    int res[size] ={0};
    cout<<"Daily Temp   : ";
    traverse(temp,size);
    
    stack<pair<int,int>> mstack;
    for(int i=0;i<size;i++){
        // mstack.push({i,temp[i]});
        while(!mstack.empty() && temp[i]>mstack.top().second){
            res[mstack.top().first] = (i - mstack.top().first); //store the difference of the index that is the no of days
            mstack.pop();
        }
        mstack.emplace(i,temp[i]);
    }
    cout<<"Result       : ";
    traverse(res,size);
    // cout<<"Stack Values : ";
    // empty_stack(mstack);
    
    return 0;
}