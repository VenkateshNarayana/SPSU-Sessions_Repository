/*Vowels and Consonants*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<<"Check Valid Palindrome"<<endl;
    string str1 = "m123a9l*a#ya5l-a0m1";
    // string str1 = "ka*ji&lk1";
    
    //step 1
    int left=0, right=str1.size()-1;
    while(left<right){
        if(isalpha(str1.at(left))){
            if (isalpha(str1.at(right))){
                if(str1.at(left) != str1.at(right)){
                    //if not a match then report not a Palindrome and exit
                    cout<<"NOT a Valid Palindrome"<<endl;
                    return 0;
                }else{
                    //if both are matching then move the left and right pointers
                    left++;
                    right--;
                }
                
            }else{
                //if right is not alphabet then decrement right
                right--;
            }
        }else{
            //if left is not alphabet then increment left
            left++;
        }
    }
    cout<<"VALID Palindrome"<<endl;
    return 0;
}