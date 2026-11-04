/******************************************************************************
STL-SET - Find the Smallest Element Greater Than K
using upperbound
*******************************************************************************/
#include <iostream>
#include <set>
using namespace std;

void traverse_set(set<int> temp_set){
    for(auto it=temp_set.begin();it!=temp_set.end();it++){
        cout<<*(it)<< " ";
    }
    cout<<endl;
}
int main()
{
    cout<<"STL-SET (Find the Smallest Element Greater Than K)"<<endl;
    set<int> s = {10, 20, 30, 40, 50};
    int k = 25;
    cout<<"Given :";
    traverse_set(s);
    
    auto it = s.upper_bound(k);
    if(it==s.end()){
        cout<<"Not found";
    }else{
        cout<<"Smallest Element >"<<k<< " = "<<*it<<endl;
    }
    return 0;
}