#include <iostream>
using namespace std;
int main(){
/*
Pattern to be printed:
D
C D 
B C D 
A B C D
*/
cout << "Enter the value of n : ";
int n;
cin >> n;
int row = 1;
while (row <= n){
    int col = 1;
    char start = 'A' + n - row;
    while (col <= row){
        cout << start;
        start++;
        col++;
    }
    cout << endl;
    row++;


}
}