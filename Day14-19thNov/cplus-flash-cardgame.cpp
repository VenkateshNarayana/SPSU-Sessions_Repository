/******************************************************************************
Use of Static Variable
The pair template is defined in the <utility> header.
*******************************************************************************/
#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <random>
#include <algorithm>

using namespace std;

class Flash{
    private :
        static vector<pair<int, string>> deck;
        static void showDeck(){
            for(auto card : deck) {
                cout << "Rank="<< card.first << " card=" << card.second << endl ;
            }
            cout<<endl;
        }
    public :
        string user;
        vector<string> cards;
        Flash(string user){
            this->user = user;
        }
        void pull3Cards(){
            int num;
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<int> dist(1, 52);
            int i=1;
            while(i<=3){
                num = dist(gen);
                // cout << "Random Number = " << num << endl;
                if(deck[num].first==-1){
                    num = dist(gen);
                    // cout << "Random Number = " << num << endl;
                }else{
                    cards.push_back(deck[num].second);
                    deck[num].first = -1;
                    i++;
                }
            }
            
        }
        int sumCards(){
            int sum = 0;
            cout<<this->user<<" cards - ";
            for(auto card : cards){
                sum += stoi(card.substr(1));
                cout<<card<<" "; //<<"="<<card.substr(0,1) << " " << card.substr(1) <<" sum="<<sum<<endl;
            }
            cout<<endl;
            return sum;
        }
        static void openDeck(){
            string suits = "SCDH";
            for(char ch : suits){
                for(int i=1;i<=13;i++){
                    //string(1, ch) creates a string containing exactly one character, namely ch
                    string card =  string(1,ch) + to_string(i); 
                    
                    deck.push_back({i, card});
                }
            }
            showDeck();
        }
        static void shuffle(){
            cout<<"shuffle"<<endl;
            
            random_device rd;
            mt19937 gen(rd());
        
            for(int i = deck.size() - 1; i > 0; i--) {
        
                uniform_int_distribution<int> dist(0, i);
        
                int j = dist(gen);
        
                swap(deck[i], deck[j]);
            }
            showDeck();
        }
        
        
};
vector<pair<int, string>> Flash::deck={};
int main()
{
    cout<<"Hello World-Flash"<<endl;
    Flash::openDeck();
    Flash::shuffle();
    
    Flash p1("Player1");
    p1.pull3Cards();
    // Flash::showDeck();
    
    Flash p2("Player2");
    p2.pull3Cards();
    
    cout<<(p1.sumCards()>p2.sumCards()?p1.user+" Wins":p2.user+ " Wins")<<endl;
    
    return 0;
}