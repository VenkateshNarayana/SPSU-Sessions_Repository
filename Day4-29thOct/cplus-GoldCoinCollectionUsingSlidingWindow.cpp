/*
This vacation you went to visit the golden house. There are N rooms in this golden house 
and its owner needs someone to take care of the management of this house. Owner of this house 
wanted an intelligent manager for this role, so he created one puzzle within that golden house. 
The person who will be able to solve that puzzle will be the manager of the golden house. 

Owner of the house kept some numbers of golden coins in each room. You have to choose two rooms, 
one from where you will enter and other one from where you will exit. From any room either you 
can exit, or you can move to the next room. While visiting any room you will collect all the gold coins, 
and if you enter any room then you can’t skip collecting gold coins from that room, you have to take 
those coins. Owner wants to have exactly K coins, when you exit the room, he guarantees that there 
will be at least one possible solution for this puzzle.
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
	int n = 10, k=15;
	int rooms[] = {5, 3, 7, 14, 1, 17, 18, 4, 8, 3};
	
	//two pointer approach
	int left =0,right =0;
	int csum = rooms[left];
	int startwin=-1, endwin=-1;
	int winsize = -1;
	
	while(right<n){
	  
	    if(csum==k){ //check if the first window ==k
	        //possible solution
	        if((right-left+1)<winsize || winsize==-1){
	            winsize = right-left+1; //capture the smallest window
    	        startwin = left  + 1; //room number 1 based 
    	        endwin   = right + 1;
	        }
	        cout<<"Target met k="<<csum <<"("<<left<<","<<right<<") window size="<<(right-left+1)<<endl;
	        //reinitialise
	        csum -= rooms[left]; //shrink the window to go to next window
	        left++;
	    }else if(csum>k){
	        //reinitialise values , go to next window
	        csum -= rooms[left]; //shrink the window to go to next window
	        left++;
	    }else if(csum<k){
	        //check the csum if it has met the target of k 
	        csum  += rooms[++right]; // keep expanding to meet the target of k    
	    }
	}
	cout<<"Final window("<<startwin<<","<<endwin<<") window size :"<<winsize<<endl;
	return 0;
}
