/******************************************************************************
Coding Problem - Bob is going to bet today on horse riding.
Example 1: 
• Input: 90 100 -> N = 10,K=100 
         30 40 50 20 20 10 90 10 10 10 -> Price to make bet on each horse in order • 
Output: 3 
*******************************************************************************/
#include <iostream>
#include <deque>
using namespace std;
int main(){
    cout<<"Bob's Horse Betting - Deque & sliding window"<<endl;
    int bet_price[10] = {30, 40, 50, 20, 20, 10, 90, 10, 10, 10};
    int N= 10,K=100;
    deque<int> dq;
    //Deque + Sliding window
    int curr_sum = 0,max_count=0,win_size =0;
    for(int i=0; i<N ;i++){
        // Expand the window
        dq.push_back(bet_price[i]);
        curr_sum += bet_price[i];
        
        // Shrink the window if sum >= K
        while(curr_sum >= K && !dq.empty()){
            curr_sum -= dq.front();
            dq.pop_front();
        }
        // Update maximum window size
        int win_size = dq.size();
        max_count = max(max_count, win_size);

        cout << " Current Sum = " << curr_sum
             << " Window Size = " << win_size
             << " Max Count = " << max_count << endl;
    }
    //finally print the max horses
    cout << "Maximum Horses = " << max_count << endl;
    return 0;
}