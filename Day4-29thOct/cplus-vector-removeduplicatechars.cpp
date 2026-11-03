/******************************************************************************
Remove Duplicates from a String
*******************************************************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    string str = "abbaca";// → "ca"
    vector<char> st1;
    for(char ch:str){
        if(!st1.empty() && ch==st1.back()){
            st1.pop_back();
        }else{
            st1.push_back(ch);
        }
    }
    string temp="";
    while(!st1.empty()){
        temp +=st1.back();
        st1.pop_back();
    }
    reverse(temp.begin(),temp.end());
    cout<<"Original:"<<str<<", Transformed:"<<temp;
    
    return 0;
}