/******************************************************************************
DP Programming - Climbing stairs

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    cout<<"Dynamic Programming-Find no of ways to climbing n stairs"<<endl;
    int n;
    cout<<"Enter the no of stairs:";
    cin>>n;
    int dp[n+1]={0};
    //base case for climbing 1 stairs
    dp[1] = 1;
    //base case for climbing 2 stairs
    dp[2] = 2;
    
    for(int i=3;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];//formula for computing
    }
    cout<<"No of ways to climb "<<n<< "stairs is"<<dp[n]<<endl;
    return 0;
}