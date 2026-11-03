/* Functions - Recursions
*/
#include<iostream>
using namespace std;
int factorial(int num){
	if (num==1) return 1;
	return num* factorial(num-1);
}
int sum_digit(int num){
	if (num==0) return 0;
	return (num%10) + sum_digit(num/10);
}
int main(){
	int number;
	cout<<"Enter a number: ";
	cin>>number;
	
	//find factorial using for loop
	int fact = 1;
	for(int i=1;i<=number;i++){
		fact *=i;
	}
	cout<<"factorial="<<fact<<endl;
	
	cout<<"factorial using recursion ="<<factorial(number)<<endl;
	
	return 0;
}

