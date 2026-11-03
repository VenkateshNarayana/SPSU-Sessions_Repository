/******************************************************************************
Welcome to Set
1.insert() , emplace()
2.count()  - count(value) in a set will return1 if present, otherwise 0
           - in a unordered_set will return	1 if present, otherwise 0
           - in a multiset it will return Number of occurrences of that argument 
           - in a unordered_multiset it will return Number of occurrences of that argument 
3.erase()
4.find()
5.size()
6.empty()
7.erase()
*******************************************************************************/
#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main()
{
    int number;
    set<int> s;
    multiset<int>  multi_set1;
    cout<<"Hello Set"<<endl;
    multi_set1.insert(1);
    multi_set1.insert(1);
    multi_set1.insert(1);
    multi_set1.insert(1);
    
    cout<<"Enter a number: ";
    cin>>number;
    for(int i=2;i<number;i++){
        s.insert(i);
    }
    
    cout<<"Count of 1 in  set: "<<s.count(1)<<endl; //in set it will only check the presence of that number
    cout<<"Count of 1 in multi set: "<<multi_set1.count(1); //in multi set it will return the count of argument
    
    return 0;
}
