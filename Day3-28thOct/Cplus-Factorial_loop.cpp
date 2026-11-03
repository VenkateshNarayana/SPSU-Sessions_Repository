#include<iostream>
using namespace std;

int factorial(int num){
	if (num==1) return 1;
	return num*factorial(num-1);
}
int sum_digits(int num){
	if (num==0) return 0;
	return (num%10)+sum_digits(num/10);
}

int main(){
	int fact=1;
	
	int number = 5;
	
	for(int i=1;i<=number;i++){
		fact *= i;
	}
	
	cout<<"factorial = "<<fact<<endl;
	cout<<"factorial = "<<factorial(number)<<endl;
	
	int num = 5678;
	cout<<"Sum digits = "<<sum_digits(num)<<endl;
	return 0;
}
