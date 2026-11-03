/******************************************************************************
Welcome to STL - Stack
1.infix to postfix
2.postfix evaluation

*******************************************************************************/
#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;
int precedence(char op_ch){
    int pr =-1;
    switch (op_ch){
        case '*': 
        case '/': 
        case '%': pr = 2;break;
        case '+': 
        case '-': pr = 1;break;
        default : pr = -1;
    };
    return pr;
}
int main()
{
    cout<<"STL-Stack"<<endl;
    stack<char> s1;
    string infix_str = "a*(b+c)/d" ; //--> "abc+*d/"
    string postfix_str = "";
    
    cout<<"Given Infix expression: "<<infix_str<<endl;
    // cout<<infix_str.at(0)<<"l=" << infix_str.length()<<endl;
    char ch;
    for(int i = 0; i<infix_str.length();i++){
        ch = infix_str.at(i);
        // cout<<infix_str.at(i)<<" ";
        //step1: traverse the infix and check for operator or operand
        if(ch=='('){
            s1.push(ch);
        }else if((ch == '/') || (ch == '*') || (ch == '+') || (ch == '-') || (ch == '%')){
            while(!s1.empty() &&
                  s1.top() != '(' &&
                  precedence(s1.top()) >= precedence(ch))
            {
                postfix_str += s1.top();
                s1.pop();
            }

            s1.push(ch);
        }
        else if(ch==')'){ //closing parenthesis
            //pop until open is found
            while(!s1.empty() && s1.top()!='('){
                postfix_str += s1.top();
                s1.pop();
            }
            if(!s1.empty())
                s1.pop();//to remove the opening parenthesis
            
        }else{ //operand
            postfix_str += ch;
        }
    }
    //check for empty stack
    while(!s1.empty()){
        //remove all the operator and append it to my stack
        postfix_str +=s1.top();
        s1.pop();
    }
    cout<<"PostFIX expression    : "<<postfix_str<<endl;
    
    return 0;
}