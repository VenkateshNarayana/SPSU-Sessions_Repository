/* Functions - Recursions - Sum Digits
*/
#include<iostream>
using namespace std;

int sum_digit(int num){
	if (num==0) return 0;
	return (num%10) + sum_digit(num/10);
}
int main(){
	int number;
	cout<<"Enter a number: ";
	cin>>number;
	
	//find sum of digit using recursion 
	cout<<"Sum of Digits = "<<sum_digit(number)<<endl;
	
	return 0;
}

