/* Iteration(Looping) Constructs
1. for loop
2. while loop
3. do while
continue and break statements used for skipping and terminating iterations
 
*/
#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter a number :";
	cin>>x;
	
	cout<<"Multiplication Table"<<endl;
	for(int i=1;i<=10 ;i++){
		cout<<i*x <<" "<<endl;
	}
	cout<<endl;
	
	int num=256;
	cout<<"Extracting digits of "<<num<<endl;
	//extraction of digit
	while(num>0){
		int digit = num%10; //extract digit
		cout<<digit <<endl;
		num /=10; //reduce the number
	}
	cout<<endl;
	
	
	int option=0;
	cout<<"***************MENU*********"<<endl;
	do{
		cout<<"Select the operation :"<<endl;
		cout<<"1: Search"<<endl;
		cout<<"2: Insert"<<endl;
		cout<<"3: Delete"<<endl;
		cout<<"4: Exit"<<endl;
		
		cin>>option;
	}while(option!=4);
	cout<<"Exited menu";
	
	return 0;	
}
