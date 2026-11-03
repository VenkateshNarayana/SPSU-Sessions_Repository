#include<iostream>
using namespace std;
int main(){
	int arr[] = {4,3,6,7,8,};
	int l = INT_MIN, sl = INT_MIN ;
	for(int i=0;i<5;i++){
		if(arr[i]>l){
			sl = l;
			l  = arr[i];
		}else if(arr[i]>sl and arr[i]<l){
			sl = arr[i];
		}
	}
	cout<<"SL="<<sl;
	return 0;
}
