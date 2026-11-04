/******************************************************************************
Algorithms
Find best time to buy and sell stock
*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
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
int main()
{
    cout<<"SLT algorithm"<<endl;
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = 6;
    cout<<"Given array:";
    traverse_arr(arr,n);
    
    int minValue = INT_MAX;
    int maxDiff = 0;

    for (int i = 0; i < n; i++) {

        // Calculate difference using minimum so far
        maxDiff = max(maxDiff, arr[i] - minValue);

        // Update minimum value
        minValue = min(minValue, arr[i]);
    }

    cout << "Max Profit:"<< maxDiff;
    return 0;
}