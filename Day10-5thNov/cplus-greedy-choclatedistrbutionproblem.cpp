/******************************************************************************
Coding Problem - Choclate Distribution Problem using Greedy Algorithm
Example 1 :
Input  : N=8, M=5 and arr = [3,4,1,9,56,7,9,12].
Output : 6
*******************************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    cout<<"Greedy-Find min difference between max choclate and min choclate distributed"<<endl;
    int arr[8] = {3,4,1,9,56,7,9,12};
    int N = 8, M=5; //N->size of array and M->no of children
    //sort in ascending order
    sort(arr,arr+N);
    int left = 0,right = M-1; //2 pointer approach 
    int min_count = arr[right]-arr[left];//assume min_count to be the differene of first window
    while(right<N){
        cout<<"Window-"<<(left+1)<<" min count("<<arr[right]<<","<<arr[left]<<")="<<arr[right]-arr[left]<<endl;
        min_count = min(min_count, arr[right]-arr[left]);
        left++;//move to next window
        right++;
    }
    cout <<"Min Difference of all windows="<<min_count<<endl;
    return 0;
}