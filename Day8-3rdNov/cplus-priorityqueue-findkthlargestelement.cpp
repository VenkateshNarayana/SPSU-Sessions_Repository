/******************************************************************************
STL - Priority Queue - Finding kth largest element
*******************************************************************************/
#include <iostream>
#include <queue>
using namespace std;
void traverse_pq(priority_queue<int> temp_pq){
     //traversing or Priority queue using size (since we do not have iterators - .begin() & .end())
    cout<<"Priority queue: ";
    while(temp_pq.size()!=0){
        cout<<temp_pq.top()<< " ";
        temp_pq.pop();//delete element
    }
    cout<<endl;
}
int main()
{
    cout<<"STL-Priority queue"<<endl;
    priority_queue<int> pq; //default is Max Heap
    //insert
    pq.push(19);
    pq.push(9);
    pq.push(5);
    pq.push(108);
    pq.push(18);
    pq.push(81);
    
    int k;
    cout<<"Enter the value of k(Largest):";
    cin>>k;
    
    
    //check top after inserting random values
    cout<<"Top:"<<pq.top()<<endl;
    for(int i=1;i<k;i++){
        //deletion
        pq.pop();
    }
    //check top after deletion
    cout<<k <<"Largest is "<<pq.top()<<endl;
    
   
    return 0;
}