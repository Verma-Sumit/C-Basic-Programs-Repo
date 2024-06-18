#include <iostream>
using namespace std;
int main(){
// In fibonacci series, the third number is the sum of previous two numbers.
// eg: 0 1 1 2 3 5 8 13 21 34 ....
cout << "Enter the value till you wanna get fibonacci series: ";
int n;
cin >> n;
int a = 0; // these are initial values to start the series
int b = 1;
cout << a << " " << b << " ";
for (int i = 1; i <=n ; i++){
    int nextNumber = a + b;
    cout << nextNumber << " ";
    a = b; // putting value of b in a
    b = nextNumber; // putting value of next number in b

}


}