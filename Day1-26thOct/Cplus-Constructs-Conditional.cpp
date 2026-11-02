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
	int x;
	cout<<"Enter a number :";
	cin>>x;
	//simple if-else
	cout<<"Using if-else"<<endl;
	if (x%2==0){
		cout<<x<<" is even number "<<endl;	
	}else{
		cout<<x<<" is odd number "<<endl;	
	}
	//if- else if - else laddering
	cout<<"Using Laddering"<<endl;
	if (x>0){
		cout<<x<<" is a positive number "<<endl;	
	}else if(x<0){
		cout<<x<<" is a negative number "<<endl;	
	}else{
		cout<<x<<" is zero "<<endl;	
	}
	
}
