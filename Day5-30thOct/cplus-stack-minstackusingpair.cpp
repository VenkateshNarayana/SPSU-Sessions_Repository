/*
Min Stack
1.Min stack	- Track minimum alongside original values single stack	
*/
#include <iostream>
#include <stack>
#include <string>
#include <climits>

using namespace std;
void traverse(stack<pair<int,int>> tempst){
    while(!tempst.empty()){
        cout<< tempst.top().first <<" "<<tempst.top().second;
        tempst.pop();
    }
    cout<<endl;
}

int main()
{
    cout << "STL - Stack" << endl;
    stack<pair<int,int>> stack_val;
    int val;
    char op='y';
    do{
        cout<<"Enter the value to add to stack:";
        cin>>val;    
        if(!stack_val.empty() && val<stack_val.top().first){
            stack_val.emplace(val,val);
        }else if(stack_val.empty()){
            stack_val.emplace(val,val);
        }else{
            stack_val.emplace(val, stack_val.top().first);
        }
        cout<<"Value pushed to stack successfully,Want to add more?(y/n)";
        cin>>op;
    }while(op=='y' || op=='Y');
    // traverse(stack_min);
    cout<<"Min before pop()= "<<stack_val.top().second<<endl;
    stack_val.pop();
    cout<<"Min after pop()= "<<stack_val.top().second<<endl;
    
    return 0;
}