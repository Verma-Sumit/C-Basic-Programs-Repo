#include <iostream>
using namespace std;
int main(){

int a = 5;
int b = 8;
// Bitwise operators work on bit level
cout << " a is " << a << " " << "b is " << b << endl;
cout << "a AND b is " << (a&b) << endl;
cout << "a OR b is " << (a|b) << endl;
cout << "NOT of a is " << (~a) << endl;
cout << "a XOR b is " << (a^b) << endl;
}