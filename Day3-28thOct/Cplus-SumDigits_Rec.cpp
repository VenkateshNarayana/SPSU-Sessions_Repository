/* Sum of digits using recursion */
#include <iostream>
using namespace std;

int sum_digits(int number){
	if(number==0) return 0;
	return (number%10)+sum_digits(number/10);
}
long int power(int base,int exp){
	if (exp==1){
		return exp;
	}
	return base * power(base,exp-1);
}
int main(){
	int number = 300;
	cout<<"Digit sum=" << sum_digits(number)<<endl;
	
	cout<<"Power ("<<number<<"^"<<"2)=" << power(number,3)<<endl;
	
	return 0;
}
