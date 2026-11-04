/******************************************************************************
STL - Set

*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <numeric>
#include <set>
#include <vector>

using namespace std;
void traverse_arr(int temp_arr[],int size){
    
    for(int i=0;i<size;i++){
        cout<<temp_arr[i]<< " ";
    }
    cout<<endl;
}
void traverse_vec(vector<int> temp_vec){
    
    for(auto it=temp_vec.begin();it!=temp_vec.end();it++){
        cout<<*(it)<< " ";
    }
    cout<<endl;
}
void traverse_set(set<int> temp_set){
    
    for(auto it=temp_set.begin();it!=temp_set.end();it++){
        cout<<*(it)<< " ";
    }
    cout<<endl;
}
int main()
{
    cout<<"SLT algorithm"<<endl;
    //Check Whether All Elements Are Positive
    int arr1[] = {10, 20, 30, 40};
    int size1 = sizeof(arr1)/sizeof(int);
    cout<<"Given array1 :";
    traverse_arr(arr1,size1);
    
    int arr2[] = {50, 20, 30, 70};
    int size2 = sizeof(arr2)/sizeof(int);
    cout<<"Given array2 :";
    traverse_arr(arr2,size2);
    
    set<int> s1={arr1,arr1+size1};
    cout<<"s1:";
    traverse_set(s1);
    cout<<"s2:";
    set<int> s2={arr2,arr2+size2};
    traverse_set(s2);
    cout<<"Intersection Array :";
    for(auto val : s1) {
        if(s2.find(val) != s2.end())
            cout<<val<<" " ;
    }
    cout<<endl;
    
    return 0;
}