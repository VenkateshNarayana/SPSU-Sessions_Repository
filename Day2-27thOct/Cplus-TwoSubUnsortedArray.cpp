/* Two Sum Problem */

#include <iostream>
using namespace std;
int main(){
	int arr[] = {1,13,11,7,3};
	int size = sizeof(arr)/sizeof(int);
	int target = 18;
	
	int hash_table[100]={0};
	cout<<"Two Sum (Unsorted Array): "<<endl;
	for(int i =0; i<size ;i++){
		int complement = target - arr[i];
		if(hash_table[complement]==1){
			cout<<complement<<"+"<<arr[i]<<"="<<target<<endl;
			return 0;
		}
		hash_table[arr[i]]=1;
	}
	cout<<"No pair found"<<endl;
	return 0;
}
