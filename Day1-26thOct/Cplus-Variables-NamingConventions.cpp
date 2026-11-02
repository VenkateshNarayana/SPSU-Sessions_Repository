/* 
Variables are labeled as containers in memory which are used to stroe data that your program can use or change

Variables Naming Rules :
1. Variable can start with an alphabet(A_Z or a-z) or underscore_ or $
2. After the first letter, names can contain digits(0-9) or underscores ,It cannot start with numbers 
   or special characters. 
3. It cannot contain commas and blanks(spaces).
4. variable names are case sensitive
5. variables cannot take the below 32 keywords -
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
