/******************************************************************************
Coding Problem - Bob is going to bet today on horse riding.
Example 1: 
• Input: 90 100 -> N = 10,K=100 
         30 40 50 20 20 10 90 10 10 10 -> Price to make bet on each horse in order • 
Output: 3 
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    cout<<"Bob's Horse Betting - Two pointer + sliding window"<<endl;
    int bet_price[10] = {30, 40, 50, 20, 20, 10, 90, 10, 10, 10};
    int N= 10,K=100;
    //Two pointer same direction
    int left = 0,right = 0;
    int max_count = 0;
    int curr_sum  = bet_price[0];
    while(right < N){
        if (curr_sum < K){
            //buy more horses (expand-by incrementing right)
            curr_sum +=bet_price[++right];
        }else{
            //check how many horse could be purchased for the amount K and update the horse max_count
            max_count = max(max_count,(right-left)); //(j-1) is the current count of horses
            cout<<"curr_count= "<<(right - left)<<" max_count="<<max_count<<" curr sum"<<curr_sum<<endl;
            //shrink the window by incrementing left
            curr_sum -= bet_price[left++];//shrink the window
            // cout<<"curr sum"<<curr_sum<<endl;
        }
    }
    //finally print the max horses
    cout<<"Max Horses ="<<max_count<<endl;
    return 0;
}