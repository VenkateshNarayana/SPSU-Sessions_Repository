/******************************************************************************
STL - QUeue - First Non Repeating Character in a Data Stream
*******************************************************************************/
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
    cout<<"STL-Queue"<<endl;
    string input_str = "aabcb";
    queue<char> q;
    int freq_table[256] = {0};
    
    cout<<"Given String: "<<input_str<<endl;
    
    for(int i=0;i<input_str.length();i++){
        cout<<input_str.substr(0,(i+1))<<" - ";
        //calculate the freq and update the count in our freq_table
        q.push(input_str.at(i));
        freq_table[input_str.at(i)]++;
        // cout<<"count of"<<input_str.at(i)<<" is "<<freq_table[input_str.at(i)];
        if(freq_table[input_str.at(i)]>1){
            while(!q.empty() && q.front()==input_str.at(i)){ //remove all the char from the queue whose count has become >1
                q.pop();//pop the front
            }
            if(q.empty()){
                cout<<"#";       //print # is q is empty
            }else{ 
                cout<<q.front(); //print the front() if q is not empty
            }
        }else if (freq_table[input_str.at(i)]==1){
            cout<<q.front();     //print the whatever is available at front() 
        }
        cout <<endl;
    }
    cout <<endl;
    return 0;
}