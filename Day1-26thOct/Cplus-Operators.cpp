/*Operators in C++
1. Arithmetic Operators    - Basic Math /Increment/Decrement --> + , -, * , /, %
   Unary operators         - Increment/Decrement             --> ++, --
2. Relational (Comparison) - Compare values                  --> ==, !=, >, < ,>=, <=
3. Logical                 - Combine or negate boolean values--> &&, ||, !
4. Assignment              - Assign or Update Values         --> =, +=, -=, *=, /=, %=, >>=, <<=
5. Bitwise				   - Operate on binary digits        --> &(AND), |(OR), ^(XOR),>>(right shift),<<(left shift),~(bitwise not)
6. Conditional             - Ternary (shortcut for if else)  --> condition? true : false
7. Miscellaneous           - Memory,type,scope,object, access
							 size, pointers  				 --> sizeof, new, deleted, &,*, . , ->, ::, (type)

*/
#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter a number :";
	cin>>x;
	cout<<"Squre: "<<x*x<<endl;
}
