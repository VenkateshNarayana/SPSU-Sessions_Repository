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
using namespace std;

int main()
{
    // std::string string2   = "hello world";
    string string2   = "hello world";
    char string1[20] = "hello world";
    cout<<"Enter string1 :";
    // cin>>string2; //works for char array and string truncates all characters afte space
    // cout<<string2;
    
    getline(cin,string2);//this will accept a string not char array (all including space until newline is entered
    cout<<string2<<endl;
    string1[0] = 'p';
    std::cout<<string2.append(" venkatesh")<<std::endl;
    std::cout<<string1<<endl;
    
    cout<<"length   = " <<string2.length()<<endl;
    cout<<"size     = "   <<string2.size()  <<endl;
    
    cout<<"string2  = "<<string2.insert(0,"hi!!! ")<<endl;
    cout<<"find (!) = "<<string2.find("!")<<endl;
    cout<<"find (@) = "<<string2.find("@")<<endl;
    if (string2.find("@")==string::npos) cout<<"@ not found in string2"<<endl;
    
    cout<<"character at index(0)="<<string2.at(0)<<endl; //print the first character
    
    //traverse a string
    for(int i=0;i<string2.length();i++){
        cout<<string2.at(i) << " ";
    }
    cout<<endl;
    return 0;
}