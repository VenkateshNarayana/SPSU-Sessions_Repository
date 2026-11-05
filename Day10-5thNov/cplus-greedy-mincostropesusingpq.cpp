/******************************************************************************
Greedy - Min Cost of Ropes
Connect ropes with min cost
*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    cout<<"Greedy - Min Cost of Ropes using priority_queue"<<endl;
    int n = 4;
    int arr[n] = {4,3,2,6};
    long min_cost = 0; //compute the cummulative cost
    priority_queue<int,vector<int>,greater<int>> pq={arr,arr+n};
    while(pq.size()!=1){
        long curr_cost = 0;
        curr_cost +=pq.top(); //first min
        pq.pop();
        curr_cost +=pq.top(); //second min
        pq.pop();
        cout<<"curr cost ="<<curr_cost<<endl; //print at each iteration the curr_cost
        pq.push(curr_cost); //curr cost of 2 ropes 
        min_cost  +=curr_cost; //overall cost
    }
    cout<<"Minimum Cost="<<min_cost<<endl;
    return 0;
}