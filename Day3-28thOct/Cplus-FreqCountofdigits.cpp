/* Frequency Count in an array 
1 - 4
2 - 4
3 - 3
4 - 2
*/
#include <iostream>
using namespace std;
int main(){
	int arr[] = {1,1,2,3,4,1,2,2,3,1,2,3,4};
	int size = sizeof(arr)/sizeof(int);
	
	int freq_table[10]={0};
	
	for(int i=0;i<size;i++){
		freq_table[arr[i]]++; //count the digit's 
	}
	//print the freq table
	for(int i=0;i<10;i++){
		if(freq_table[i]!=0){
			cout<<i<< "-" <<freq_table[i]<<endl;	
		}
	}
		
	return 0;
}
