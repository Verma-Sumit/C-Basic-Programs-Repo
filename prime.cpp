#include <iostream>
using namespace std;
int main(){
int n;
cout << "Enter your number: ";
cin >> n;
bool isPrime = 1;
for (int i = 2; i < n; i++ ){
    if (n % i == 0){
        isPrime = 0;
        break;
        }
}
if (isPrime == 0){
    cout << "is a prime number ";
}
else{
    cout << "isn't a prime number";
}
}
