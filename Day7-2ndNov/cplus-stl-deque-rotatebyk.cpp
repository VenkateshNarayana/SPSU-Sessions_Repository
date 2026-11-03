/******************************************************************************
STL - Deque - Double ended queue - Perform Rotation by K
*******************************************************************************/
#include <iostream>
#include <deque>
#include <string>
using namespace std;
void traverse_dq(deque<int> temp_dq){
    for(auto it = temp_dq.begin();it!=temp_dq.end(); it++){
        cout << *(it) <<" ";
    }
    cout<<endl;
}
int main()
{
    cout<<"STL-Deque"<<endl;
    deque<int> dq = {1,2,3,4,5};
    int k = 2;
    cout << "Given elements: ";
    traverse_dq(dq);
    
    cout<<"After Rotation: ";
    for(int i=1; i<=k ;i++){
        //pop from back and push it in front
        int pop_item = dq.back();
        dq.pop_back();
        dq.push_front(pop_item);
    }
    traverse_dq(dq);
    
    return 0;
}