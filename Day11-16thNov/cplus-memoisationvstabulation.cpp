/******************************************************************************
DP Programming
*******************************************************************************/
#include <iostream>
using namespace std;

long long fibnacci(long num,int dp[]){
    if (num==0) return 0;
    if (num==1) return 1;
    
    if(dp[num]==0) {
        dp[num] = (fibnacci(num-1,dp) + fibnacci(num-2,dp));
    }
    return dp[num];
}
void fibnacci_tabulation(long num){
    int dp[num+1]={0};
    
    dp[0] = 0;
    dp[1] = 1;
    
    cout<<dp[0]<< " "<<dp[1]<< " ";
    for(int i=2;i<=num;i++){
        dp[i] = dp[i-1] + dp[i-2]; //get the current from previou 2 values
        cout<<dp[i]<< " "; 
    }
    return;
}
    
int main()
{
    int dp[51]={0};
    cout<<"RECURSION vs MEMOISATION-Dynamic Programming"<<endl;
    // cout<<"Result="<<fibnacci(2)<<endl;
    
    //call memoisation function
    cout<<"Fibnacii Using Memoisation "<<endl;
    for(int i=0;i<40;i++){
        cout<<""<<fibnacci(i,dp)<< " " ;
    }
    
    //call tabulation function
    cout<<endl;
    cout<<"Fibnacii Using Tabulation "<<endl;
    fibnacci_tabulation(40);
    
    return 0;
}