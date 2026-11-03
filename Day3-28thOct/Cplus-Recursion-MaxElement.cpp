/* Rotate Array  by k */
#include <iostream>
using namespace std;
int max_element(int [],int);
int main(){
	
	int arr[] = {8,2,13,4,5};
	int size = sizeof(arr)/sizeof(int);
	
	cout<<"Max Element: "<<max_element(arr,5);
	return 0;
}
int max_element(int arr[],int size){
	if (size==1){
		return arr[0];
	}
	int max = max_element(arr,size-1);
	if(arr[size]>max){
		max = arr[size];
	}
	return max;
}

