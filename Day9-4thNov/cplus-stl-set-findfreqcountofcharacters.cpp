/******************************************************************************
STL-MAP
*******************************************************************************/
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    cout<<"STL-Map - Frequency count"<<endl;
    string str = "this is my test string";
    map<char,int> m1;
    for (char ch : str){
        //m1.insert({ch,  })
        m1[ch]++; // use ch as key ,value will be 1 if not present in map else incremented by 1 if present 
    }
    //print the freq count
    cout<<"Frequency count table :"<<endl;
    for (auto kv : m1){
        cout <<kv.first << " - "<<kv.second<<endl;
    }
    
    return 0;
}