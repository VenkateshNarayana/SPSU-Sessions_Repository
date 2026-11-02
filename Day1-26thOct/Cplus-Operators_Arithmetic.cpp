/* Variables Naming Rules
1.Variable can start with an alphabet or underscore or $
2It cannot start with numbers or special characters except _ and $
3.commas and blanks are not allowed
4.names are case sensitive
5.keywords are not allowed
double 		int			float		char		bool	
if			else 		while 		do 			switch 		
default		case 		for			goto 		break		continue
sizeof 		short 		long		signed		unsigned	
static 		extern		auto		register		
union		struct 		typedef		enum		
void		volatile	const

*/
#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter a number :";
	cin>>x;
	cout<<"Squre: "<<x*x<<endl;
}
