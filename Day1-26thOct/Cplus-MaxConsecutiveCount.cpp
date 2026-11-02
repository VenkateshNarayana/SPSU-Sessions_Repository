/* Iteration(Looping) Constructs
Max count of consecutive numbers*/
#include<iostream>
using namespace std;
int main(){
	long long int number;
	cout<<"Enter the number: ";
	cin>>number;
	
	int prev_digit = -1;
	int max_count  = 0;
	int curr_count = 0;
	while(number>0){
		int curr_digit= number%10;	
		//compare with current digit to see if they are same
		if(curr_digit==prev_digit){
			curr_count++;
		}else{
			curr_count = 1;
			prev_digit = curr_digit;
		}
		if (curr_count>max_count) max_count = curr_count;
		number /=10;
	}
	
	cout<<"Max consecutive count="<<(max_count==1?0:max_count)<<endl;
	return 0;
}
