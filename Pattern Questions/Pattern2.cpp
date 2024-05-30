#include <iostream>
using namespace std;
int main(){

/* We have to print following pattern:
   1111
   2222
   3333
   4444
...nnnn
i.e. n X n pattern! */
cout << "Enter the value of n: ";
int n;
cin >> n;
int i = 1;
while (i<=n){
    int j = 1;
    while (j <= n){
        cout << i;
        j++;
    }
    cout << endl;
i++;
}
}