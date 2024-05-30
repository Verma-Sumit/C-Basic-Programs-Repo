#include <iostream>
using namespace std;
int main(){
/*
pattern to be printed:
1
2 3
3 4 5
4 5 6 7
for n = 4 .
*/
cout <<"Enter the value of n: ";
int n;
cin >> n;
int row = 1;
while (row<=n){
    int col = 1;
    int value = row;
    while (col<=row){
        cout << value << " ";
        value++;
        col++;
    }
    
    cout << endl;
    row++;
}

}