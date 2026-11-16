/******************************************************************************
DP - House Robber I 
Given an array that determines the money stored in each house, find the max money
that can be robbed such that no two adjacent houses are robbed
i/p -->{2,7,3,1,4,2,1,8}
o/p -->19

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
void traverse(int temp[],int size){
    for(int i=0;i<size;i++){
        cout<<temp[i]<< " ";
    }
    cout<<endl;
}
int main()
{
    cout<<"House Robber I"<<endl;
    int arr[] = {2,7,3,1,4,2,1,8};
    int size = sizeof(arr)/sizeof(int);
    int dp[size]={0};
    dp[0] = arr[0];
    dp[1] = max(arr[0],arr[1]);
    
    for(int i=2; i<size; i++){
        dp[i] = max((dp[i-2]+arr[i]),dp[i-1]);
    }
    traverse(dp,size);
    cout<<"Max Loot ="<<dp[size-1];
    
    return 0;
}