/* performing rotation using splice 
1. Understanding splice()
Syntax:
list.splice(position, source_list, element_iterator);

It moves the element pointed to by element_iterator from source_list to the position specified by position.

For two iterators from the same list, you can use:
l.splice(l.end(), l, l.begin());


This moves the first element to the end.
*/

#include <iostream>
#include <list>
using namespace std;
void traverse(list<int> list){
    for (auto value : list) {
        cout << value << " ";
    }
    cout<<endl;
}
int main() {
    list<int> l = {1, 2, 3, 4, 5};
    cout<<"list orginal : ";
    traverse(l);
    auto it = --l.end();//move 5
    --it;//move 4
    --it;//move 3
    l.splice(l.begin(),l,it);//move 2 to begin
    
    traverse(l);
    int k = 2;
    int n = l.size();
    
    //effective rotation
    k = k % n;

    for (int i = 0; i < k; i++) {
        l.splice(l.begin(), l, --l.end()); //perform right rotation (we move the end element to begin)
        // l.splice(l.end(), l, l.begin());   //perform left rotation (here we move first element to end)
        cout<<"l-iter-"<<i<<" : ";
        traverse(l);
    }


    return 0;
}