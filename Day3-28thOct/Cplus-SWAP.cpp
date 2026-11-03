/* Rotate Array  by k */
#include <iostream>
using namespace std;
void swap(int,int); //function declaration
void swap_byref(int &a,int &b);
int main(){
	int a=10 , b=20;
	cout<< "Before swap :" << a << " " <<b<<endl;
	swap(a,b); //function call
	cout<< "After swap :" << a << " " <<b<<endl;
	
	swap_byref(a,b); //function call
	cout<< "After swap :" << a << " " <<b<<endl;
	
	return 0;
}
//function definition
void swap(int a, int b){
	int temp = a;
	a = b;
	b = temp;
//	cout<<a << " " << b<<endl;
}

void swap_byref(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
//	cout<<a << " " << b<<endl;
}
