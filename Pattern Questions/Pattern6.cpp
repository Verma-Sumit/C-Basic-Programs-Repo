#include <iostream>
using namespace std;
int main(){
/*
pattern to be printed:
*
**
***
****
for n = 4 .
*/
cout <<"Enter the value of n: ";
int n;
cin >> n;
int row = 1;
while (row<=n){
    int col = 1;
    while (col<=row){
        cout << "*";
        col++;
    }
    cout << endl;
    row++;
}

}