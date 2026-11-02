/* Iteration(Looping) Constructs
Harshad Number*/
#include<iostream>
using namespace std;
int main(){
	int number;
	cout<<"Enter the number";
	cin>>number;
	
	int sum = 0,temp;
	temp=number;
	while(number>0){
		int digit = number%10;
		sum = sum + digit;
		number = number/10;
	}
	if (temp%sum==0){
		cout<<"Harshad Number";
	}else{
		cout<<"Not Harshad Number";
	}
	
	return 0;
}
