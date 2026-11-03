
#include <iostream>
using namespace std;

int power(int a, int b){
    // Base condition
    if (b == 0)
        return 1;

    // Recursive call
    return a * power(a, b - 1);
}

int main(){
    int a = 2, b = 5;
	cout << a << "^" << b << " = ";
    cout << power(a, b);

    return 0;
}

