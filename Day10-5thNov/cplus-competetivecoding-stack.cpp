/******************************************************************************
Using Stack - Competetive Coding
*******************************************************************************/
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    std::cout<<"Hello World"<<endl;
    string str="bbbaaababa";
    stack<char> s1;
    int curr_count_a = 0, max_count_a = 0;
    for(int i =0;i<str.length();i++){
        s1.push(str.at(i));
        if (s1.top()=='a') curr_count_a++;
        if((i+1)%3==0){
            max_count_a = max(max_count_a,curr_count_a);
            curr_count_a = 0;
            //empty the stack
            while(!s1.empty()){
                s1.pop();
            }
        }
    }
    if(!s1.empty()){
        max_count_a = max(max_count_a,curr_count_a);
    }
    cout<<"Max count of a="<<max_count_a<<endl;
    return 0;
}