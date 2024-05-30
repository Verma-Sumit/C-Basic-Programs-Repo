#include <iostream>
using namespace std;
int main(){
/*
Pattern to be printed:
A B C
A B C
A B C
for n = 3
*/
cout << "Enter the value of n: "; /*If you enter value more than 26, special characters will
begin to be printed!*/
int n;
cin >> n;
int i = 1;
while (i <= n){
    int j = 1;
    while (j <= n){
        char value = 'A' + j - 1; /*While performing arithmetic on 'A' its being coverted to int, 
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