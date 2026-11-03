/******************************************************************************
Linked list - 
1.Remove consecutive duplicates	unique()
2.Remove all even numbers	erase()
3.Check whether a list is palindrome	Two-way traversal
4.Rotate a list by K positions	Iterators
*******************************************************************************/
#include <iostream>
#include <list>
using namespace std;
void traverse_list(list<int> list1){
    for(int data:list1){
        cout<<data <<"->";
    }
    cout<<"NULL"<<endl;
}
int main()
{
    cout<<"Linked List - Problems"<<endl;
    list<int> list1 = {1,1,2,2,5,6,6,7,8};
    
    //removes duplicate from sorted array
    list1.unique();
    traverse_list(list1);
    
    // list1.remove_if([](int x){return (x%2==0);});
    // traverse_list(list1);
    
    auto it=list1.begin();
    while(it!=list1.end()){
        if(*it%2==0) {
            // it =list1.erase(it);
            int value = *it;
            it++;
            list1.remove(value);
        }else{
            it++;
        }
    }
    list1.push_back(7);
    list1.push_back(5);
    list1.push_back(1);
    traverse_list(list1);
    
    auto left = list1.begin();
    auto right = list1.rbegin();
    
    for(int i=0;i<list1.size()/2;i++){
        if(*left != *right){
            cout<<"Not Palindrome"<<endl;
            return 0;
        }
    }
    cout<<"Palindrome"<<endl;
    
}