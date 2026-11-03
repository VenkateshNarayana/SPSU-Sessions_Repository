/* Rotate Array  by k */
#include <iostream>
using namespace std;

void reverse(int arr[],int sidx,int eidx){
	//reverse the from the start and end index
	int left= sidx,right = eidx;
	while(left<right){
		//perform swap
		int temp   = arr[left];
		arr[left]  = arr[right];
		arr[right] = temp;
		right--;
		left++;
	}
}
int main(){
	int arr[] = {1,3,7,11,13};
	int size = sizeof(arr)/sizeof(int);
	
	int k = 2;
	cout<<"Original Array: ";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout <<endl;
	//step1 :  
	reverse(arr,0,size-k-1);	
	//step2 : reverse the second half
	reverse(arr,size-k,size-1);	
	//step3 : get the rotated array by reversing the entire array
	reverse(arr,0,size-1);
	//rotated array
	cout<<"Rotated Array : ";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout <<endl;
	
	return 0;
}
