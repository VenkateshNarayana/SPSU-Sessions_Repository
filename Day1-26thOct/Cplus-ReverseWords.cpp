/************************************************************************************************
string : reverse words in a sentence
******************************************************************************************************/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<string> words;
    // std::string string2   = "hello world";
    string string2   = "hello world";
    string tempword="";
 
    //traverse a string and append the words in the vector(words)
    for(int i=0;i<string2.length();i++){
        cout<<string2.at(i) << " ";
        if(string2.at(i)==' '){
        	words.push_back(tempword);
        	tempword = "";
		}else{
			tempword += string2.at(i);
//			tempword.push_back(string2.at(i));
		}
    }
    cout<<endl;
    // Store the last word
    if (!tempword.empty()){
        words.push_back(tempword);
    }
    //reverse the order of words in the string
    for (int i = words.size() - 1; i >= 0; i--){
        cout << words[i] << " ";
    }
    cout<<endl;
    
    return 0;
}
