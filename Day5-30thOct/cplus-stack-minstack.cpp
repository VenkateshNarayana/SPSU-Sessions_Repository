/*
Min Stack
1.Min stack	- Track minimum alongside original values using another stack	
*/
#include <iostream>
#include <stack>
#include <string>
#include <climits>
using namespace std;
void traverse(stack<int> tempst){
    while(!tempst.empty()){
        cout<< tempst.top() <<" ";
        tempst.pop();
    }
    cout<<endl;
}
int get_min(stack<int> stack_val,stack<int> stack_min){
    int no_of_pop = stack_min.size()-stack_val.size();
    
    while(no_of_pop>0){
        stack_min.pop();
        no_of_pop--;
    }
    if(!stack_min.empty()) {
        return stack_min.top();
    }else{
        return INT_MAX;
    }
}

int main()
{
    cout << "STL - Stack" << endl;
    stack<int> stack_val,stack_min;
    int val;
    char op='y';
    do{
        cout<<"Enter the value to add to stack:";
        cin>>val;    
        stack_val.push(val);
        if(!stack_min.empty() && val<stack_min.top()){
            stack_min.push(val);
        }else if(stack_min.empty()){
            stack_min.push(val);
        }else{
            stack_min.push(stack_min.top());
        }
        cout<<"Value pushed to stack successfully,Want to add more?(y/n)";
        cin>>op;
    }while(op=='y' || op=='Y');
    // traverse(stack_min);
    cout<<"Min before pop()= "<<get_min(stack_val,stack_min)<<endl;
    stack_val.pop();
    cout<<"Min after pop()= "<<get_min(stack_val,stack_min)<<endl;
    
    return 0;
}