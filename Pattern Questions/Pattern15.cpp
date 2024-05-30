#include <iostream>
using namespace std;
int main(){
/*
Pattern to be printed:
A B C
B C D
C D E
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
        char value = 'A' + i + j - 2; /*
        Formula explanation:
        for the same pattern in numbers, formula is supposed to be-
        i + j - 1 = 1       when both i and j are 1
        adding ('A' - 1) both the sides, and calculating we get:
        'A' + i + j - 2
        */
        cout << value << " ";
        j++;
    }
    cout << endl;
    i++;
}
}