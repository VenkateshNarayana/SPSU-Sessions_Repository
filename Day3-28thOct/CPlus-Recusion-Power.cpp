#include<iostream>
using namespace std;
void reverse_string(string str,int index){
	if (index<0) return;
	cout<<str[index];
	reverse_string(str,index-1);
}
int power(int base,int exp){
	if (exp==0) return 1;
	return base * power(base,exp-1);
}
int max_element(int arr[],int size){
	if(size==1){
		return arr[0];
	}
	
	int max = max_element(arr,size-1);
	
	if(arr[size]>max){
		max = arr[size];
	}
	return max;
}
int main(){
	int base = 2;
	int exp  = 5;
	
	cout<<power(base,exp)<<endl;
	
	int arr[] = {1,2,34,12,30};
	int size = sizeof(arr)/sizeof(int);
	
	cout << "Max element=" << max_element(arr,size-1)<<endl;
	
	return 0;
}
