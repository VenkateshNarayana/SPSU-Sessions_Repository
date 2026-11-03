/******************************************************************************
STL-Pair - Activity Selection

*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second < b.second;
}
int main()
{
    cout<<"STL-Activity Selection(Meeting Room)"<<endl;
    int N = 6;
    vector<pair<int,int>> meet={{1,2},{3,4},{0,6},{5,7},{8,9},{5,9}};
    
    //sort in ascending order of end time
    sort(meet.begin(),meet.end(),cmp);
    int prev_end = meet[0].second; //end time of the first Meeting
    // cout<<prev_end;
    int count=1; //track the no of meetings
    
    cout<< "Meeting Schedules:" <<endl;
    for(auto m : meet){
        cout<<m.first<<" "<<m.second<<endl;
        if(m.first>prev_end){
            //valid meeting
            count++;
            prev_end = m.second; //update the prev_end time to check for the next meeting
        }
    }
    cout<<"No of meetings: "<<count<<endl;
    
    return 0;
}