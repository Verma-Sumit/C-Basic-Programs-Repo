#include <iostream>
using namespace std;
int main(){
/*
Pattern to be printed:
A
B B
C C C
for n = 3
*/
cout << "Enter the value of n: "; /*If you enter value more than 26, special characters will
begin to be printed!*/
int n;
cin >> n;
int i = 1;
while (i <= n){
    int j = 1;
    while (j <= i){
        cout << char('A' + i - 1) << " ";
        j++;
    }
    cout << endl;
    i++;
}
}