/******************************************************************************
Frequeny counts - Using Map (Storing key value pair)
1.insert(key,value)
2.[key] = value
3.erase(key)
4.for each loop (to access key you will use .first and to access value use .second)
*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    cout<<"STL-Hash Map"<<endl;
    int arr[]={1,1,1,2,2,3};
    int arr
    int size = sizeof(arr)/sizeof(int);
    
    map<int,int> freq_map;
    for(int i=0;i<size;i++){
        freq_map[arr[i]]++; //add the frequencies
    }
    
    for(auto pair : freq_map){
        cout<<pair.first << "-" <<pair.second<<endl; //show key and values
    }
    
    return 0;
}