/******************************************************************************
Min Stack
*******************************************************************************/
#include <iostream>
#include <stack>
using namespace std;

stack<int> num_stack,min_stack;
    
void push_in_stack(int val){
    num_stack.push(val); //push every element of array in stack
    if(min_stack.empty() || (val<min_stack.top())) {
        min_stack.push(val); //only if the val is lesser than min_stack top add to stack
    }
}

void pop_out_stack(){
    if(min_stack.top()==num_stack.top()){
        num_stack.pop(); //pop out the value from num stack first
        min_stack.pop(); //pop out the same from min_stack also
    }else{
        num_stack.pop(); //pop only from num stack
    }
}
int get_min(){
    return min_stack.top();
}
int main()
{
    cout<<"STL-Stack"<<endl;
    int arr[] = {1,0,-1,2,-3,5,-1};
    int size = sizeof(arr)/sizeof(int);
    
    //insert into stack all the array element
    for(int i=0;i<size;i++){
        push_in_stack(arr[i]);    
    }
    cout <<"Initial Min val= " <<get_min()<<endl;
    //remove the element from num_stack
    pop_out_stack();
    cout <<"After Pop1-Min val= " <<get_min()<<endl;
    pop_out_stack();
    cout <<"After Pop2-Min val= " <<get_min()<<endl;
    pop_out_stack();
    cout <<"After Pop3-Min val= " <<get_min()<<endl;
    
    return 0;
}