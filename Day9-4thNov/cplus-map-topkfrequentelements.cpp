/******************************************************************************
STL- Map
*******************************************************************************/
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    string str = "this is test";
    cout<<"STL-Map - Frequency Count";
    map<char,int> map_freq;
    
    for(auto ch : str ) map_freq[ch]++;
    
    cout <<"Frequency of characters :"<<endl;
    for(auto kv : map_freq) cout<< kv.first <<"-"<<kv.second<<endl;
    
    // Copy map into vector
    vector<pair<char,int>> v(map_freq.begin(), map_freq.end());

    // Sort based on values (second element)
    sort(v.begin(), v.end(),
         [](pair<char,int> a, pair<char,int> b)
         {
             return a.second > b.second;
         });
    //now print the vector'
    cout <<"Frequency of characters(descending) :"<<endl;
    for(auto p : v)
    {
        cout << p.first << " - " << p.second << endl;
    }

    return 0;
}