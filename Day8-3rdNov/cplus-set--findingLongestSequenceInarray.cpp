/******************************************************************************
STL - set
*******************************************************************************/
#include <iostream>
#include <set>
using namespace std;
int main()
{
    cout<<"STL-Set"<<endl;
    int arr[] = {100, 4, 200, 1, 3, 2};
    int size = sizeof(arr)/sizeof(int);
    set<int> s1(arr,arr+size); //this will copy the array elements into set
    int max = 0 ;
    for (auto x : s1){
        if (s1.find(x-1)==s1.end()){
            //find if there is sequence of elements that can be formed for this
            int curr = x;
            int curr_count = 1;
            while(s1.find(++curr)!=s1.end()){
                curr_count +=1;
            }
            //check the curr_coutn with global max
            if(curr_count>max){
                max = curr_count;
            }
        }
    }
    //print the longest sequence found
    cout<<"Length of the longest Sequence ="<<max<<endl;
    
    return 0;
}