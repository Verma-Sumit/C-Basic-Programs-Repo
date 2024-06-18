#include <iostream>
using namespace std;
int main(){
/*
pattern to be printed:
1
2 3
4 5 6
7 8 9 10
for n = 4 .
This is called FLOYD'S TRIANGLE
*/
cout <<"Enter the value of n: ";
int n;
cin >> n;
int count = 1;
int row = 1;
while (row<=n){
    int col = 1;
    while (col<=row){
        cout << count << " ";
        col++;
        count ++;
    }
    
    cout << endl;
    row++;
}

}