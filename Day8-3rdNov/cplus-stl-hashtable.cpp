/******************************************************************************
Frequeny counts
*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    cout<<"STL-Hash Tables"<<endl;
    int arr[]={1,1,1,2,2,3};
    int size = sizeof(arr)/sizeof(int);
    
    int freq_tab[256]={0};
    for(int i=0;i<size;i++){
        int ascii = arr[i] + '0';
        freq_tab[ascii]++; //add the frequencies
    }
    
    for(int i=0;i<256;i++){
        if(freq_tab[i]!=0)
            cout<<i << "-" <<freq_tab[i]<<endl; //show only the freq values>0
    }
    //sort the values of vectors
    // sort(freq_tab,freq_tab+size,greater<int>());
    sort(freq_tab,freq_tab+size); //ascending order
    
    cout<<"after sorting"<<endl;
    for(int i=0;i<256;i++){
        if(freq_tab[i]!=0)
            cout<<i << "-" <<freq_tab[i]<<endl; //show only the freq values>0
    }
    return 0;
}