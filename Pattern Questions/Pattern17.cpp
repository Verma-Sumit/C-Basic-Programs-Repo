#include <iostream>
using namespace std;
int main(){
/*
pattern to be printed:
A
B C 
D E F
G H I J
for n = 4 .
*/
cout <<"Enter the value of n: ";
int n;
cin >> n;
char count_char = 'A';
int row = 1;
while (row<=n){
    int col = 1;
    while (col<=row){
        cout << count_char << " ";
        col++;
        count_char ++;
    }
    
    cout << endl;
    row++;
}

}