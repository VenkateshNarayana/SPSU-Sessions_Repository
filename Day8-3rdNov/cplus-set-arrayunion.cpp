/******************************************************************************
Array Union - Using Set (Storing key value pair)
1.insert(key,value)
2.[key] = value
3.erase(key)
4.for each loop (to access key you will use .first and to access value use .second)
*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;
int main()
{
    cout<<"STL-Hash Map"<<endl;
    int arr1[]={1,1,1,2,2,3};
    int arr2[]={3,4,5,6}; 
    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);
    
    set<int>  set1;
    for(int i=0;i<size1;i++){
        set1.insert(arr1[i]); //add the arr1[] elements in the set
    }
    
    for(int i=0;i<size2;i++){
        set1.insert(arr2[i]); //add the arr2[] elements also in the set
    }
    cout<<"Union of 2 arrays : ";
    for(auto set_val : set1){
        cout<< set_val << " "; //show each value of set which is stored unique from set
    }
    cout<<endl;
    return 0;
}