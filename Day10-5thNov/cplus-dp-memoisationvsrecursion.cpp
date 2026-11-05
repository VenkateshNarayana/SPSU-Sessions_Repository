/******************************************************************************
Dynamic Programming - Tabulation vs Recursion
*******************************************************************************/
long long fibnacci (long long num,long long dp_table[]){
    if (num==0) return 0;
    if (num==1) return 1;
    
    if(dp_table[num]==0){
        dp_table[num] = fibnacci(num-2,dp_table)+fibnacci(num-1,dp_table);
        // return fibnacci(num-2,dp_table)+fibnacci(num-1,dp_table);
    }
    return dp_table[num];

}
#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Fibnacci Series - Using Recursion"<<endl;
    cout<<"Enter the no of values to generate:";
    cin>>n;
    cout<<"Fibnacci numbers("<<n<<"): "<<endl;
    long long dp_table[n]={0}; //initialize the values to 0
    
    dp_table[0]=0;
    dp_table[1]=1;
    
    for(int i=1;i<n;i++)
        cout<<fibnacci(i,dp_table)<<" ";
    
    return 0;
}