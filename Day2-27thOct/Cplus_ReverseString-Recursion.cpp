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

Here, s.substr(1) returns the substring starting from index 1, excluding the first character.

For example:
- reverse_string("HELLO") ? reverse_string("ELLO") + "H"
- reverse_string("ELLO") ? reverse_string("LLO") + "E"
- This continues until the string becomes empty.
- During the return phase, characters are appended in reverse order.
*/
#include <iostream>
#include <string>
using namespace std;

string reverse_string(string s){
    if (s.empty())
        return "";

    return reverse_string(s.substr(1)) + s[0];
}

int main()
{
    string s = "HELLO";

	cout << s.substr(1)<<endl;
    cout << reverse_string(s);
	
    return 0;
}
