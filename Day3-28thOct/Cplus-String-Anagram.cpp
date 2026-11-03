#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1 = "listen";
	string s2 = "silent";
	
	cout<<"S1 :";
	for(char ch : s1){
		cout<<ch << " ";
	}
	cout<<endl;
	
	
	cout<<"S2 :";
	for(char ch:s2){
		cout<<ch << " ";
	}
	cout<<endl;
}
