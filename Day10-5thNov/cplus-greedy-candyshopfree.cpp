/******************************************************************************
Competetive Coding - Greedy
Shop in Candy Store (free candy)
*******************************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    cout<<"Greedy-Candy Store"<<endl;
    int candy[]={3,2,1,4};
    int N=4,K=2;
    
    //sort the candies
    sort(candy,candy+N);//default sort ascending
    // sort(candy,candy+N,greater<int>());// sort descending
    
    int buy_c=0, free_c=N-1;
    int min_cost = 0;
    while(buy_c <=free_c){
        min_cost +=candy[buy_c]; //cost of candy
        //after purchasin 1 candy-shopkeeper give 2 free
        //decrement the free by K 
        free_c -= (K);
        buy_c++;
    }
    cout<<"Min cost to buy all candies="<<min_cost<<endl;
    return 0;
}