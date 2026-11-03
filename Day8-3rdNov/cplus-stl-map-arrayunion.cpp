/******************************************************************************
Array Union - Using Map (Storing key value pair)
1.insert(key,value)
2.[key] = value
3.erase(key)
4.for each loop (to access key you will use .first and to access value use .second)
*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <map>
#include <set>

using namespace std;
int main()
{
    cout<<"STL-Hash Map"<<endl;
    int arr1[]={1,1,1,2,2,3};
    int arr2[]={3,4,5,6}; 
    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);
    
    map<int,int> map_union;
    for(int i=0;i<size1;i++){
        map_union[arr1[i]]++; //add the arr1[] elements
     }
    
    for(int i=0;i<size2;i++){
        map_union[arr2[i]]++; //add the arr2[] elements
     }
    cout<<"Union of 2 arrays : ";
    for(auto pair : map_union){
        cout<<pair.first << " "; //show key which is storing unique values from both
    }
    cout<<endl;
    return 0;
}