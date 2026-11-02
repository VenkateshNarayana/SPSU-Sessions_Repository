/*Operators in C++
===================================================================================================
      Operators                Precedence                      		Associativity
===================================================================================================
1.	  ::						1(Highest) Scope Resolution		 		L->R

2.	  ++ -- ~ () [] . ->        Postfix increment/decrement,
	  							function call(),array subscript[],  	L->R
	  							member access (dot)
	  							
3.	 ++ -- + - ! ~ *            Prefix increment/decrement,             
	 & sizeof, new, delete  	unary plus/minus,logical NOT,			R->L
	  							bitwise NOT,derefernce
	  							
4.	 .* ->*						pointer-to-member operators				L->R
5.	 Arithmetic- * / %          multiplication, division,modulous       L->R
6.	 Arithmetic- + -            adddition, subtraction                  L->R
7.   bitwise << >>              bitwise shift left/right              	L->R
8.   Relational < ,> ,<=, >=    Compare values                          L->R
9.   equality ==, !=            Equality operator 		 				L->R
10.  &              			bitwise AND					         	L->R
11.  ^              			bitwise XOR					         	L->R
12.  |              			bitwise OR					         	L->R
13.  &&              			Logical AND					         	L->R
14.  ||              			Logical OR					         	L->R
15.  ?:              			Ternary operators    		         	R->L

16.  = , +=, -=, *=, /=, %=     Assignment operators			        R->L
	>>=, <<=, &=, ^=

*/
#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter a number :";
	cin>>x;
	cout<<"Square: "<<x*x<<endl;
}
