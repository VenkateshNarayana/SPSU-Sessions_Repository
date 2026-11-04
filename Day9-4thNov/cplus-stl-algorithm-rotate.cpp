/******************************************************************************

STL-Algorithm
Binary Search
Given a sorted array, determine whether an element exists.
binary_search(start, end, search_val);
*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;
void traverse_arr(int temp[],int size){
    for (int i=0;i<size;i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    cout<<"STL-Algorithm (Binary search)"<<endl;
    int arr[] = {1,2,34,49,25,13,21,60,99};
    int size = sizeof(arr)/sizeof(int);
    cout<<"Given array: ";
    traverse_arr(arr,size);
    
    bool result = binary_search(arr,arr+size,9);
    cout <<"Search result :";
    cout<<(result?"Found":"Not Found")<<endl;
    
    int k = 25;
    sort(arr,arr+size);//ascending order
    int *it = lower_bound(arr,arr+size,k);
    if(it!=(arr+size)){
        cout<<"Smallest Element <="<<k<< " is "<< *it<<endl;
    }else{
        cout<<"Smallest Element <="<<k<< " does not exist"<<endl;
    }
    
    int *it1 = upper_bound(arr,arr+size,k);
    if(it1!=(arr+size)){
        cout<<"First Element >"<<k<< " is "<< *it1<<endl;
    }else{
        cout<<"First Element >"<<k<< " does not exist"<<endl;
    }
    
    //max value and min value
    int max = *max_element(arr,arr+size);
    int min = *min_element(arr,arr+size);
    
    cout<<"Max element:"<<max<< " Min element:"<<min<<endl;
    
    //Average value using accumulate(sum of all the array elements) 
    int sum = accumulate(arr,arr+size,0);
    int avg = sum/size;
    
    cout<<"Sum = "<<sum<< " Average = "<<avg<<endl;
    
    //perform rotation
    k=2;
    rotate(arr,(arr+size-k),arr+size);
    cout<<"After "<<k<<"rotations: ";
    traverse_arr(arr,size);
    
    int prefix[size];
    partial_sum(arr,arr+size,prefix);
    cout<<"prefix sum array: ";
    traverse_arr(prefix,size);
    
    //using running max count all the elements greater than previous elements
    int max_elt = arr[0];
    int count = 1;
    for(int i=1;i<size;i++){
        if(arr[i]>max_elt){
            count++;
            max_elt = arr[i];
        }
    }
    cout<<"No of Max elements found= "<<count<<endl;
    
    return 0;
}