/* Second largest element in an array */
#include <iostream>
using namespace std;
int main(){
	int arr[] = {4,5,6,2,1,8};
	int size = sizeof(arr)/sizeof(int);
	
	int second  =  INT_MIN;
	int largest =  INT_MIN;
	
	for(int i =0;i<size;i++ ){
		if(arr[i]>largest){
			second = largest;
			largest = arr[i];
		}else if(arr[i]>second && arr[i]<largest){
			second = arr[i];
		}
	}
	cout<< "Second :"<<second<<endl;
	
	return 0;
}

