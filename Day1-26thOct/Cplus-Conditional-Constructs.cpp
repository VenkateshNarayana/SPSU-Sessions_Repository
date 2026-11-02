/* Conditional Constructs
1. if, if-else
2. nested if
3. else if laddering
4. ternary
5. switch case
*/
#include<iostream>
using namespace std;
int main(){
	int x,y,z;
	cout<<"Enter x,y and z numbers :";
	cin>>x>>y>>z;
	
	if(x>y){
		if(x>z){
			cout<<"x is greater";
		}else{
			cout<<"z us greater";
		}
	}else{
		if(y>z){
			cout<<"y is greater";
		}else{
			cout<<"z is greater";
		}
	}
	
	if (x>y && x>z){
		cout<<"x is greater";
	}
	else if(y>z){
		cout<<"y is greater";
	}else{
		cout<<"z is greater";
	}
	
	cout<<"Using Ternary : ";
	int result = (x>y)? ((x>z)?x:z): ((y>z)?y:z);
	
	cout<<result;
	
	
	
	return 0;
	
}
