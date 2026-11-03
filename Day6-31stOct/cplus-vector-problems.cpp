/******************************************************************************

Welcome to Vector
1.size() & capacity()
2.push_back() & pop_back()
3.emplace_back()
4.at() or []
5.front() & back()
6.erase()
7.insert()
8.clear()
9.empty()
10.iterators

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;
void traverse(vector<int> temp_vec){
    for(int val:temp_vec){
        cout<<val <<" ";
    }
    cout<<endl;
}

void traverse_iterator(vector<int> temp_vec){
    for(auto it=temp_vec.begin();it!=temp_vec.end();it++){
        cout<<*(it) <<" ";
    }
    cout<<endl;
}
void traverse_iterator_reverse(vector<int> temp_vec){
    for(auto it=temp_vec.rbegin();it!=temp_vec.rend();it++){
        cout<<*(it) <<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> vec1 = {1,2};
    std::cout<<"Hello Vector"<<endl;
    vector<int> vec2(3,10);
    vector<int> vec3(vec1);
    
    vec1.at(1) = 4;
    cout<<"vec1 = ";
    traverse(vec1);
    cout<<"vec2 = ";
    traverse(vec2);
    cout<<"vector2 size="<<vec2.size()<<" capacity ="<<vec2.capacity()<<endl;
    vec2.push_back(11);
    cout<<"vec2 = ";
    traverse(vec2);
    cout<<"vector2 size="<<vec2.size()<<" capacity after push_back="<<vec2.capacity()<<endl;
    
    cout<<"vec3 = ";
    for(int i=0;i<vec3.size();i++){
        cout<<vec3[i] <<" ";
    }
    cout<<endl;
    
    vec2.erase(vec2.begin(),vec2.end()-1);
    cout<<"vec2 = ";
    traverse(vec2);
    cout<<"vec2 size="<<vec2.size()<<" capacity after erasing 3 elements="<<vec2.capacity()<<endl;
    
    vec2.insert(vec2.begin(),40);//insert one more data
    vec2.insert(vec2.begin()+1,50);//insert one more data
    cout<<"vec2 = ";
    traverse(vec2);
    cout<<"vec2 size="<<vec2.size()<<" capacity after adding 2 elements ="<<vec2.capacity()<<endl;
    
    //iterator
    vector<int>::iterator it;
    it = vec2.begin();
    cout<<"vec2 = ";
    while(it!=vec2.end())
        cout<<"->"<<*(it++)<<" ";
    cout<<endl;
    //reverse iterator
    cout<<"vec2 = ";
    traverse_iterator_reverse(vec2);
    return 0;
}