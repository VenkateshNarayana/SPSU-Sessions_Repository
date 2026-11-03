/******************************************************************************
Using vector as a stack
1.push_back - push()
2.pop_back  - pop()
3.peek      - back()
4.empty     - empty()
*******************************************************************************/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    cout<<"Vector as Stack"<<endl;
    string str = "([{}])";
    vector<char> st1;
    
    for (char ch : str){
        //check for open parenthesis
        switch (ch){
            case '[': st1.push_back(']');break;
            case '{': st1.push_back('}');break; 
            case '(': st1.push_back(')');break;
            default : if(ch!=st1.back()){
                        cout<<"Not Balanced"<<endl; //mismatch we will exit
                        return 0;
                    }else{
                        st1.pop_back(); //matching pair
                    }       
        }
    }
    if(st1.empty()){
        cout<<"Balanced Parenthesis"<<endl;
    }else{
        cout<<"Not Balanced"<<endl;
    }
    
    return 0;
}