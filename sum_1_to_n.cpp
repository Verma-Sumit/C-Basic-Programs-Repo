#include <iostream>
using namespace std;
int main(){
cout << "Enter the value till the sum you wanna get: ";
int n;
cin >> n;
int sum = 0;
for (int i = 1; i <= n; i++ ){
    sum += i;
}
cout << sum;
}