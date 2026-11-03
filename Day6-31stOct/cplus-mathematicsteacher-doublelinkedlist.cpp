/******************************************************************************
using doubly linked list
*******************************************************************************/
#include <iostream>
#include <list>
using namespace std;
int calculate_merit(list<int> mark_list){
    mark_list.unique();
    return mark_list.size(); //merit count
}
void traverse(list<int> mark_list){
    for(auto it=mark_list.begin();it!=mark_list.end();it++){
        cout<<*(it)<< " ";
    }
    cout<<endl;
}
int main()
{
    cout<<"Dales Merit Result"<<endl;
    int n; //no of student
    cout<<"Enter the no of students:";
    cin>>n;
    list<int> mark_list;
    int val;
    cout<<"Enter the marks of students :"; //enter the marks of n students
    for(int i=0;i<n;i++){
        cin>>val;
        mark_list.push_back(val);
    }
    cout<<"Original Mark List: ";
    traverse(mark_list);
    
    int m;//no of revaluations
    cout<<"Enter the reevaluation count:";
    cin>>m;
    int x,y; //student's index(x) and his corresponding marsk(y)
    for(int i=0;i<m;i++){
        cout<<"Enter the Student's index: ";
        cin>>x;
        cout<<"Enter the Marks after revaluation: ";
        cin>>y;
        //update the list use the advance method
        auto it = mark_list.begin();
        advance(it,x-1);
        *(it) = y; //update the value to the new marks
        traverse(mark_list);        
        //calculate the Merit
        //pass marks list
        int merit_count = calculate_merit(mark_list);
        cout<<"Merit count after "<<(i+1) <<" revaluation is "<<merit_count<<endl;
    }
    
    return 0;
}