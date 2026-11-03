#include<iostream>
using namespace std;
int main(){
	int arr1[]={1,2,3,4,5,6};
	int arr2[]={1,5,6,9,10,12};
	int size1 = sizeof(arr1)/sizeof(int);
	int size2 = sizeof(arr1)/sizeof(int);
	int left =0,right=0;
	
	cout<<"Instersection: ";
	while(left<size1 && right<size2){
			
		if(arr1[left]==arr2[right]){
			cout<<arr1[left]<< " ";
			left++;
			right++;
		}else if(arr1[left]<arr2[right]){
			left++;
		}else{
			right++;
		}
	}
	cout<<endl;
	return 0;
}
