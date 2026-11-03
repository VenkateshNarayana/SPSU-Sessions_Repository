/******************************************************************************
STL - Deque - Double ended queue - Maximum of All Subarrays of Size K
*******************************************************************************/
#include <iostream>
#include <deque>
#include <string>
using namespace std;
void traverse_arr(int temp_arr[],int size){
    for(int i = 0;i <size; i++){
        cout << temp_arr[i] <<" ";
    }
    cout<<endl;
}
void traverse_dq(deque<int> temp_dq){
    for(auto it = temp_dq.begin();it!=temp_dq.end(); it++){
        cout << *(it) <<" ";
    }
    cout<<endl;
}
int main()
{
    cout<<"STL-Deque"<<endl;
    deque<int> dq;
    int arr[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int size = sizeof(arr)/sizeof(int);
    int k = 3; //window size 
    
    cout << "Given Elements: ";
    traverse_arr(arr,size);
    
    cout<<"Max Element of All Windows: "<<endl;
    for(int i=0; i<k ;i++){
        if(dq.empty()){
            dq.push_back(arr[i]);
        }else{
            while(!dq.empty() && (arr[i]>dq.back())){
                dq.pop_back(); //remove all smaller elements from my monotonic decreasing stack
            }
            dq.push_back(arr[i]); //push the greater element into the monotonic stack
        }
    }
    int j = 1;
    cout <<"window"<<j++<< " = " << dq.front()<<endl;
    // traverse_dq(dq);
    //find the max for the rest of the windows
    for(int i= 1; i<(size-(k-1)) ;i++){
        //what is leaving (i-1) ,if it is equal to front then pop_front
        if(arr[i-1]==dq.front()){
            dq.pop_front(); //remove the element from the monotonic stack if the leaving element is same    
        }
        //what is entering (i+(k-1)) ,if this is greater then pop_back & finally push_back the greater element
        while(!dq.empty()  && (arr[i+(k-1)]>=dq.back())){
            dq.pop_back();
        }
        dq.push_back(arr[i+(k-1)]);//push the new greater element
        cout <<"window"<<j++<< " = " << dq.front()<<endl;
    }
    return 0;
}