/******************************************************************************
Greedy - Choclate Distribution among M students Using N packets

*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
int main()
{
    cout<<"Greedy-Choclate Distribution (Min Difference)"<<endl;
    int N=8, M=5;
    int A[N] = {3,4,1,9,56,7,9,12};
    deque<int> dq;
    //sort the candy packets
    sort(A,A+N); //sort ascending
    //first window
    for(int i=0;i<M;i++){
        dq.push_back(A[i]);
    }
    //curr difference of the first window
    int curr_diff = dq.back() - dq.front(); //max candy - min candy
    int min_diff = curr_diff;
    cout<<"window1 Min Diff="<<min_diff<<endl;
    //rest of the windows
    for(int i=M;i<N;i++){
        dq.pop_front();//remove the old entry (from front)
        dq.push_back(A[i]);//add the new entry(to back)
        curr_diff = dq.back() - dq.front(); //max candy - min candy
        min_diff = min(min_diff,curr_diff); //pick the min 
        cout<<"window"<<(i-3)<<", Curr Difference="<<curr_diff<< ", Min Diff="<<min_diff<<endl;
    }
    
    cout<<"Min difference ="<<min_diff<<endl;
    return 0;
}