/* Two Sum Problem */

#include <iostream>
using namespace std;
int main(){
	int arr[] = {1,3,7,11,13};
	int size = sizeof(arr)/sizeof(int);
	int target = 18;
	//find the two elements which add up to a given sum
	//sum = 12
	int left = 0,right = size-1;
	
	while(left<right){
		if(arr[left]+arr[right]==target){
			cout<<"("<<arr[left]<<"," <<arr[right]<<")"<<endl;
			break; //solution found
		}else if(arr[left]+arr[right]>target){
			right--; //shed weights
		}else{
			left++;  //add weights
		}
	}
	
	return 0;
}
