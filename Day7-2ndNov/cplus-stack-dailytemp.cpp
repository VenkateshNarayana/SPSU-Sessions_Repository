/******************************************************************************
Daily temperature : Monotonic decreasing stack

*******************************************************************************/
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    cout<<"STL-Stack(Monotonic)"<<endl;
    int temp[]= {73, 74, 75, 71, 69, 72, 76, 73};
    // stack<int> m_stack;
    stack<pair<int,int>> m_stack;
    //step1 : traverse the temperature list from array
    int size = sizeof(temp)/sizeof(int);
    int ans[size]={0};
    
    for(int i=0;i<size;i++){
        if(m_stack.empty()){
            // m_stack.push({i,temp[i]});
            m_stack.emplace(i,temp[i]);
        }else{
            while(!m_stack.empty() && temp[i]>m_stack.top().second){
                ans[m_stack.top().first] = (i-m_stack.top().first); //calculate the days using index
                m_stack.pop();
            }
            m_stack.emplace(i,temp[i]);//push the greater temp after removing all the lower temp from stack
        }
    }
    //print my ans
    cout<<"Final ans= ";
    for(int i=0;i<size;i++){
        cout<<ans[i]<< " ";
    }
    cout<<endl;
    return 0;
}