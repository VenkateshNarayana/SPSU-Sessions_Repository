/******************************************************************************
A furnishing company is manufacturing a new collection of curtains. The curtains are of 
two colors aqua(a) and black (b). The curtains color is represented as a string(str) 
consisting of a’s and b’s of length N. 
Then, they are packed (substring) into L number of curtains in each box.
The box with the maximum number of ‘aqua’ (a) color curtains is labeled. 
The task here is to find the number of ‘aqua’ color curtains in the labeled box.

Note : If ‘L’ is not a multiple of N, the remaining number of curtains should be considered as a substring too. In simple words, after dividing the curtains in sets of ‘L’, any curtains left will be another set(refer example 1)
Example 1: Input : bbbaaababa -> Value of str
                    3         -> Value of L
          Output : 3   -> Maximum number of a’s
*******************************************************************************/
#include <iostream>
#include <string>
#include <deque>
#include <numeric>
#include <algorithm>
using namespace std;

void traverse_dq(deque<char> temp){
    for(auto it=temp.begin();it!=temp.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
}
int main()
{
    cout<<"Hello World"<<endl;
    int  N=10,L=3;
    char chrarr[N+1] = "bbbaaababa";
    deque<char> dq; //={chrarr,chrarr+N};
    // traverse_dq(dq);
      
    
    int i=0;
    int max_count_a=0;
    
    while(i<N){
        dq.push_back(chrarr[i++]);
        if(i%3==0) {
            traverse_dq(dq);
            int count_of_a = count(dq.begin(),dq.end(),'a');
            max_count_a = max(max_count_a,count_of_a);
            //remove all from deque
            while(!dq.empty()){
                dq.pop_back();
            }
        }
    }
    
    cout<<"Max_count="<<max_count_a<<endl;
    return 0;
}