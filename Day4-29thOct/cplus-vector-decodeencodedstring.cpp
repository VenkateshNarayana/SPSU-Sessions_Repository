/******************************************************************************
Vector as stack - Decode an encoded string	"3[a2[c]]" → "accaccacc"
*******************************************************************************/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str = "5[a2[cx]]"; //→ "accaccacc"
    vector<int> nstack;
    vector<char> cstack;
    string temp="";
    
    for(auto ch : str){
        if(isalpha(ch) || ch=='['){
            cstack.push_back(ch);
        }else if(isdigit(ch)){
            nstack.push_back(ch-'0');
        }else{ //for closing parenthesis
            temp="";
            while(cstack.back()!='['){
                temp +=cstack.back();   
                cstack.pop_back();
            }
            cstack.pop_back(); //this is to pop the open parenthesis
            reverse(temp.begin(),temp.end());
            cout<<"characters inside parenthesis ="<<temp<<endl;
            
            int multiplier = nstack.back(); //get the multiplier from num stack
            cout<<"multiplier=" << multiplier<<endl;
            nstack.pop_back(); //remove the multiplier also 
            for(int i=1;i<=multiplier;i++){
                for(char ch : temp){
                    cstack.push_back(ch); //push all the characters by the multiplier times back into char stack
                }
            }
        }
    }
    
    if(nstack.empty()){
        cout<<"num stack is empty"<<endl;
    }else{
        while(!nstack.empty()){
            cout<<nstack.back()<< " ";
            nstack.pop_back();
        }
        cout<<endl;
    }
    cout<<"Result = ";
    temp = "";
    while(!cstack.empty()){
        temp += cstack.back();
        cstack.pop_back();
    }
    reverse(temp.begin(),temp.end());
    cout<<temp<<endl;
    return 0;
}