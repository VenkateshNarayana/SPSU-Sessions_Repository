/*
Arrays
*/
#include<iostream>
using namespace std;
int main(){
	int arr[5];
	int arr2[5] = {1,2,3,4,5};
	int arr3[] = {1,2,3,4,5};
	
//	int arr4[]; //this is not allowed
	//traversing an array
	int size = sizeof(arr3)/sizeof(int);
	for(int i=0;i<size;i++){
		cout<<arr3[i]<< " ";
	}
	cout<<endl;
	
	//finding max element
	int max = arr3[0];
	for(int i=1;i<size;i++){
		if(arr3[i]>max){
			max = arr3[i];
		}
	}
	cout<<"MAX element= "<<max<<endl;;
	
	//reverse the elements
	cout<<"Reverse Array ";
	for(int i=size-1;i>=0;i--){
		cout<<arr3[i]<<" ";
	}	
	cout<<endl;

	int left=0 , right = size-1;
	while(left<right){
		//perform the swap
		int temp = arr3[left];
		arr3[left] = arr3[right];
		arr3[right] = temp;
		left++;    //increment the left pointer
		right--;   //decrement the right pointer
	}	
	cout<<"Reverse Array(Inplace) ";
	for(int i=0;i<size;i++){
		cout<<arr3[i]<<" ";
	}	
	cout<<endl;
	
	return 0;
	
}
