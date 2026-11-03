/*
Postfix Evaluation
*/

#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    stack<int> s1;
    
    cout<<"Postfix Evaluation"<<endl;
    string postfix = "234+*5/";
    cout<<"Postfix : "<<postfix<<endl;
    for(int i=0;i<postfix.length();i++){
        if(isdigit(postfix.at(i))){
            s1.push(postfix.at(i)-'0');
        }else{
            int pop2 = s1.top();
            s1.pop();
            int pop1 = s1.top();
            int result = 0;
            s1.pop();
            //perform operation
            switch (postfix.at(i)){
                case '+': result = pop1 + pop2;break;
                case '-': result = pop1 - pop2;break;
                case '*': result = pop1 * pop2;break;
                case '/': result = pop1 / pop2;break;
                case '%': result = pop1 % pop2;break;
            };
            //push it back to stack
            s1.push(result);
        }
    }
    //pop the result from the stack
    cout<<"Result = "<<s1.top()<<endl;
    return 0;
}