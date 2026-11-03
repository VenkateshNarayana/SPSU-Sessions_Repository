/******************************************************************************
Welcome to GDB Online.Vector
*******************************************************************************/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    cout<<"Vectors in C++"<<endl;
    string str = "welcome to the world of vectors";
    vector<string> words;//={"Hello","World"};
    string word="";
    for(int i=0;i<str.length();i++){
        if(str.at(i)==' ' || i==str.length()-1){
            words.push_back(word);
            word = "";
        }else{
            word += str.at(i);
        }
    }
    
    // for (string word : words){
    //     cout<<word << " ";
    // }
    // cout<<endl;
    
    for(auto word : words){
        cout<<word << " ";
    }
    cout<<endl;
     
    cout<<"Reversed word in the sentence: "<<endl;
    for(int i=words.size()-1;i>=0;i--){
        cout<<words[i] << " ";
    }
    cout<<endl;
    
    //iterator
    cout<<"Using Iterators" <<endl;
    vector<string>::iterator it;
    it = words.begin();
    while(it!=words.end())
        cout<<"->"<<*(it++)<<" ";
    cout<<endl;
    
    
    // //reverse iterator
    // for(auto it=vec2.rbegin();it!=vec2.rend();it++)
    //     cout<<"rev="<<*(it)<<" ";
    // cout<<endl;
    
    return 0;
}