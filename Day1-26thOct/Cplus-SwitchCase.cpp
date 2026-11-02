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
	int m1,m2,m3;
	double avg_marks=0.0;
	
	cout<<"Enter the 3 marks: ";
	cin>>m1>>m2>>m3;
	
	avg_marks = (m1+m2+m3)/3.0;
	int mcase = avg_marks/10;
	
	cout<<avg_marks<<"grade=";
	switch(mcase){
		case 10: cout<<"A+";break;
		case 9: cout<<"A";break;
 		case 8: cout<<"B";break;
		case 7: cout<<"C";break;
		case 6: cout<<"D";break;
		case 5: cout<<"E";break;
		case 4: cout<<"F";break;
		default: cout<<"F";		
	}
	
	
	return 0;
}
