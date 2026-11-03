#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1 = "listen";
	string s2 = "bilent";
	int freq[256] = {0};
	bool is_anagram =true;
	cout<<"S1 :";
	for(char ch : s1){
		cout<<ch << " ";
        freq[ch]++;
	}
	cout<<endl;
	
	
	cout<<"S2 :";
	for(char ch:s2){
		cout<<ch << " ";
		freq[ch]--;
		if(freq[ch]<0) is_anagram=false;
	}
	cout<<endl;
	cout<<"Is ANAGRAM?"<< (is_anagram?"Yes":"No");
}