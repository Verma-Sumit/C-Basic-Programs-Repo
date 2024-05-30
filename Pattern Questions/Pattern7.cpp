#include <iostream>
using namespace std;
int main(){
/*
pattern to be printed:
1
1 2
1 2 3
1 2 3 4
for n = 4 .
*/
cout <<"Enter the value of n: ";
int n;
cin >> n;
int row = 1;
while (row<=n){
    int col = 1;
    while (col<=row){
        cout << col << " ";
        col++;
    }
    cout << endl;
    row++;
}

}