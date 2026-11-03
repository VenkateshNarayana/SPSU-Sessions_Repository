/******************************************************************************
STL deque -Maximum of All Subarrays of Size K
Given an array and window size K, find the maximum element in every contiguous subarray of size K.
Input:
arr = {1, 3, -1, -3, 5, 3, 6, 7};
k = 3;
Output:
{3, 3, 5, 5, 6, 7}
Hint: Maintain a decreasing monotonic deque containing array indices.
Important operations:
1.	Remove indices outside the current window from the front.
2.	Remove smaller elements from the back.
3.	Insert the current index at the back.
4.	The front of the deque gives the maximum.
Time complexity: O(n).
*******************************************************************************/
#include <iostream>
#include <deque>
#include <vector>
using namespace std;
void traverse_q(deque<int> temp_dq){
    for(auto it = temp_dq.begin();it!=temp_dq.end();it++){
        cout<<*(it)<< " ";
    }
    cout<<endl;
}
void traverse_vec(vector<int> temp_vec){
    for(auto it = temp_vec.begin();it!=temp_vec.end();it++){
        cout<<*(it)<< " ";
    }
    cout<<endl;
}
int main()
{
    cout<<"STL-deque(Find Max in fixed size window)"<<endl;
    vector<int> arr  = {1, 3, -1, -3, 5, 3, 6, 7}; //given array of elements
    
    int k = 3; //window size = 3
    deque<int> dq; 
    vector<int> ans; //initialise the ans to 0
    cout<<"Original Element     : ";
    traverse_vec(arr);
    for(int i=0;i<k;i++){
        if(dq.empty()){
            dq.push_back(arr[i]);
        }else if(arr[i]>dq.back()){
            while(!dq.empty() && (arr[i]>dq.back())) {
                dq.pop_back(); //remove smaller elements to maintain decreasing monotonic stack
            }
            dq.push_back(arr[i]);//after removing add the greater element
        }else if(arr[i]<dq.back()){
            dq.push_back(arr[i]);//add this smaller element (as it can be a possible candidate for future window)
        }
    }
    ans.push_back(dq.front()); //ans for first window
    
    for(int i = 1;i<=(arr.size()-k);i++){ //check rest windows
        if(arr[i-1]==dq.front()) {
            //remove the front (if old element is same as front)
            dq.pop_front();
        }
        //add the next Element(new element entering window)
        while(!dq.empty() && (arr[i+(k-1)]>dq.back())) {
            dq.pop_back(); //remove smaller elements to maintain decreasing monotonic stack
        }
        dq.push_back(arr[i+(k-1)]);//after removing add the greater element
        
        ans.push_back(dq.front());
    }
        
    cout<<"Max Element(Window=3): ";
    traverse_vec(ans);
    return 0;
}