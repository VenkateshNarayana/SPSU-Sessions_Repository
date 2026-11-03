/******************************************************************************
Check if 2 string are valid after removing backspaces
*******************************************************************************/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    cout<<"Valid String(backspaces)"<<endl;
    string str1 = "ab#c";
    string str2 = "ad#b#c#ff";
    string temp;
    vector<char> st1;
    
    for(char ch : str1){
        if(ch=='#'){
            st1.pop_back();
        }else{
            st1.push_back(ch);
        }
    }
    temp="";
    while(!st1.empty()){
        temp+=st1.back();
        st1.pop_back();
    }
    str1 = temp;
    
    //repeat the same for string str2
        for(char ch : str2){
        if(ch=='#'){
            st1.pop_back();
        }else{
            st1.push_back(ch);
        }
    }
    temp="";
    while(!st1.empty()){
        temp+=st1.back();
        st1.pop_back();
    }
    str2 = temp;

    //finally compare for valid
    if(str1==str2){
        cout<< "valid string"<<endl;
    }else{
        cout<< "NOT a valid string"<<endl;
    }
    return 0;
}