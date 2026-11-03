/******************************************************************************
Question 1
John is mathematics teacher in one of the classes of Dale’s school. 
The class has N students. Today is their yearly exam. And John is very strict on the answers. 
As per John, no one is allowed to cheat. He will find it out from the final marks of two adjacent students.
*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h> 
using namespace std; 
int merit_fun(int x,int y, int n,int marks[]){
    marks[x-1] = y;//update the marks of the student with revaluation value
    int ans = 1;
    //now count the students who have made it to the merit list(not copied)
    for(int i=1;i<n;i++){
        if(marks[i]!=marks[i-1]) {
            ans++;
        }
    }
    return ans;
}
int main()
{
    int n,k,x,y;
    std::cout<<"Mathematics teacher"<<endl;
    std::cout<<"Enter the number of students: ";
    cin>>n;
    std::cout<<"Enter the no of reevaluations: ";
    cin>>k;
    int marks[n];
    std::cout<<"Enter the marks of students: ";
    
    for (int i=0;i<n;i++){
        cin>>marks[i];
    }
    
    std::cout<<"Enter the reevaluation details : "<<endl;
    
    for (int i=0;i<k;i++){
        cout<<"Enter the value of X(Student index) : ";
        cin>>x;
        cout<<"Enter the value of Y(Updated marks) : ";
        cin>>y;
        cout<<"Merit list(count) : "<<merit_fun(x,y,n,marks)<<endl;
    }
    return 0;
}