/************************************************************************************************
string
1.length() - name.length() ,returns the count of  characters in the string 
2.empty()  - name.empty()  ,checks if the string is empty (no characters stored)
3.clear()  - name.clear()  ,clears all the characters from the string
4.append() - name.append("string") adds the string at the end of string
5.at()     - name.at(0)    ,extracts the character at first index
6.substr() - name.substr(0,3)-retrieves a portion(here 5 character) starting from index 0 from string
7.insert() - name.insert(0,"@") - inserts @ string at index 0
8.find()   - name.find(string2) finds string2 in name and returns the index where it found
9.erase()  - name.erase(0,4) erases the 4 characters starting from index 0 
10size()   - name.size() ,returns the count of  characters in the string 
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
    char string1[20] = "hello world";
    string tempword="";
 
	cout<<"Enter string1 :";
    cin>>string1; //works for char array and string truncates all characters after space
    cout<<string1<<endl;
    
//    getline(cin,string2);//this will accept a string not char array (all including space until newline is entered
//    cout<<string2<<endl;

    //traversing a char array checking for null character-> \0
	int i=0; 
    while(string1[i]!='\0'){
    	cout<<string1[i++]<<" ";
	}
	cout<<endl;
	
    //traverse a string and append the words in the vector(words)
    for(int i=0;i<string2.length();i++){
        cout<<string2.at(i) << " ";
        if(string2.at(i)==' '){
        	words.push_back(tempword);
        	tempword = "";
		}else{
			tempword.append(string2.at(i));
		}
    }
    cout<<endl;
    
    //reverse the order of words in the string
    for (int i = words.size() - 1; i >= 0; i--){
        cout << words[i] << " ";
    }
    
    return 0;
}
