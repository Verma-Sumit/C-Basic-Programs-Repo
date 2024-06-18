#include <iostream>
using namespace std;
int main(){
/*
Pattern to be printed:
****
***
**
*
when n = 4
*/
cout << "Enter the value of n: ";
int n;
cin >> n;
int row = 0;
while (row < n){
    int col = n - row;
    while (col > 0){
        
            cout << "*";
            
            col--;
        }
        cout << endl;
        row++;

    }
    
}

