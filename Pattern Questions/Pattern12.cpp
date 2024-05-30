#include <iostream>
using namespace std;
int main(){
/*
Pattern to be printed:
A A A A
B B B B
C C C C
D D D D
for n = 4
*/
cout << "Enter the value of n: "; /*If you enter value more than 26, special characters will
begin to be printed!*/
int n;
cin >> n;
int i = 1;
while (i <= n){
    int j = 1;
    while (j <= n){
        char value = 'A' + i - 1; /*While performing arithmetic on 'A' its being coverted to int, 
        equivalent to its ASCII value. Then after performing arithmetic, it is reconverted into character,
        equivalent to ASCII value of calculated number.
        */
        cout << value << " ";
        j++;
    }
    cout << endl;
    i++;
}
}