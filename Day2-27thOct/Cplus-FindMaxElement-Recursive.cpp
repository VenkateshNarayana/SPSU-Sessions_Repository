/* Functions - Recursions - Max Element in an array
*/
#include<iostream>
using namespace std;

int max_element(int num[],int size){
	if (size == 1) return num[0];
	
	int max = max_element(num,size-1);
	
	if (num[size-1]>max) {
		max = num[size-1];	
	}
	return max;
}
int main(){
	int number[]={5,6,4,8,10,3};
	int size = sizeof(number)/sizeof(number[0]);
	//find max element using loop 
	int max=number[0];
	for(int i=1;i<size;i++){
		if(number[i]>max){
			max = number[i];
		}
	}
	cout<<"Max(loop) = "<<max<<endl;
	//find max element using recursion 
	cout<<"Max(Recursion) = "<<max_element(number,size)<<endl;
	
	return 0;
}

