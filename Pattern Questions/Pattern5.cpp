#include <iostream>
using namespace std;
int main(){

/* We have to print following pattern:
   1 2 3 4 5
   6 7 8 9 10
   11 12 13 14 15
   16 17 18 19 20
   21 22 23 24 25
   where value of n is 5 */
cout << "Enter the value of n: ";
int n;
cin >> n;
int i = 1;
int count = 1;
while (i<=n){
    int j = 1;
    while (j <= n){
        cout << count << " ";
        count++;
        j++;
    }
    cout << endl;
i++;
}
}