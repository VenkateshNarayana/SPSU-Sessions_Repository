/************************************************************************************************
string : reverse words in a sentence
******************************************************************************************************/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string string1   = "hello world";
    int char_count[256]={0}; //store the initial count of all characters as 0
    
    //traverse a string and store the count of each characters using hash table
    for(int i=0;i<string1.length();i++){
    	char_count[string1.at(i)]++; //increment each count
    }
    cout<<endl;
    //print the frequency table
    for(int i=0;i<256;i++){
    	if(char_count[i]!=0){
    		cout<<(char)i<<"="<<char_count[i]<<endl;
		}
	}
    return 0;
}
