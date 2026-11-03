/******************************************************************************
STL - Priority Queue
Method	    Description
push(x)	    Inserts an element
emplace(x)	Constructs and inserts an element
pop()	    Removes the top element
top()	    Returns the highest-priority element
size()	    Returns number of elements
empty()	    Checks whether queue is empty
swap(pq)	Swaps two priority queues

*******************************************************************************/
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    cout<<"STL-Priority queue"<<endl;
    priority_queue<int> pq; //default is Max Heap
    //insert
    pq.push(19);
    pq.push(9);
    pq.push(5);
    pq.push(108);
    
    //check top after inserting random values
    cout<<"Top:"<<pq.top()<<endl;
    
    //deletion
    pq.pop();
    
    //check top after deletion
    cout<<"Top:"<<pq.top()<<endl;
    
    //traversing or Priority queue using size (since we do not have iterators - .begin() & .end())
    cout<<"Priority queue: ";
    while(pq.size()!=0){
        cout<<pq.top()<< " ";
        pq.pop();//delete element
    }
    cout<<endl;
    return 0;
}