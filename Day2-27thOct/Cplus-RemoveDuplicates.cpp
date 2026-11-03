/* Remove Duplicate element in an array */
#include <iostream>
using namespace std;
int main(){
	int arr[] = {1,1,2,2,3,4};
	int size = sizeof(arr)/sizeof(int);
	
	cout<< "Unique list:";
	for(int i = 1;i<size;i++ ){
		if(arr[i]!=arr[i-1])
			cout<<arr[i-1] << " ";
			if (i==(size-1)) cout<<arr[i]<< " ";	
	}
	
	return 0;
}

