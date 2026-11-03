/************************************************************************************************
string : Check Palindrome
******************************************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string string1   = "malayalam";
    string tempstr   = "";
    
    
    
    //traverse a string and store the characters from reverse
    for(int i=string1.length()-1;i>=0;i--){
    	tempstr.push_back(string1.at(i));
    }
    cout<<"Given String: "<<string1<<endl;
    cout<<"Method1-Storing Characters from reverse"<<endl;
    //compare the 2 strings to see if they are same
    if(string1==tempstr){
    	cout<<"Palindrome"<<endl;
	}else{
		cout<<"Not Palindrome"<<endl;
	}
	
	//method2
	cout<<"Method2-compare first & last characters(2 pointers)"<<endl;
	int left = 0;
	int right = string1.length()-1;
	while(left!=right){
		if(string1.at(left++)!=string1.at(right--)){
			cout<<"Not Palindrome"; 
			break;
		}
	}
	if(left==right)	
		cout<<"Palindrome"; 
    return 0;
}
