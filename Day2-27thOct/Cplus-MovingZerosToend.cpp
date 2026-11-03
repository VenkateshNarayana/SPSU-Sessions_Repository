/*
Arrrays - two pointer 
*/
#include<iostream>
using namespace std;
int main(){
	int arr[] = {5,0,4,0,7,9};
	int size = sizeof(arr)/sizeof(int);
	int left=0, right = size-1;
	cout<<"Original Order: ";
	for(int i=0;i<size;i++){
		cout<<arr[i] << " ";
	}
	cout<<endl;
	//2 pointer order not maintained
	while(left<right){
		if(arr[left]==0){
			//swap with right
			int temp = arr[right];
			arr[right] = arr[left];
			arr[left] = temp;
			right--;
			left++;
		}else{
			left++;
		}
		if(arr[right]==0){
			right--;
		}
	}
	//moving zeros to right
	cout<<"Array after moving zeros: ";
	for(int i=0;i<size;i++){
		cout<<arr[i] << " ";
	}
	cout<<endl;
	
	//maintain the order 0 5 0 3 8 0 2 
	int arr1[] = {5,0,4,0,7,9}; //{0,5,0,3,8,0,2};
	size  = sizeof(arr1)/sizeof(int);
	
	left  = 0;
	right = 1;
	while(right < size){
		if(arr1[left]==0){
			if(arr1[right]!=0){
				//swap with right
				int temp = arr1[right];
				arr1[right] = arr1[left];
				arr1[left] = temp;
				right++;
				left++;				
			}else{
				right++; //move right to a non zero value
			}
				
		}else{
			left++; //move left to find a zero value
			right=left+1; //also move the right one index right
		}
	}
	//moving zeros to right
	cout<<"Array after(preserve order) moving zeros: ";
	for(int i=0;i<size;i++){
		cout<<arr1[i] << " ";
	}
	return 0;
}
