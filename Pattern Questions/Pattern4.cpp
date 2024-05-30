#include <iostream>
using namespace std;
int main(){

/* We have to print following pattern:
   4321
   4321
   4321
   4321
   if n = 4 */
cout << "Enter the value of n: ";
int n;
cin >> n;
int i = 1;
while (i<=n){
    int j = 1;
    while (j <= n){
        cout << n-j+1;  // formula to print opposite
        j++;
    }
    cout << endl;
i++;
}
}