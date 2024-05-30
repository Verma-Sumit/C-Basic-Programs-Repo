#include <iostream>
using namespace std;
int main(){

/* We have to print following pattern:
   A B C D
   E F G H 
   I J K L
   M N O P
   where value of n is 4 */
cout << "Enter the value of n: ";
int n;
cin >> n;
int i = 1;
char count_char = 'A';
while (i<=n){
    int j = 1;
    while (j <= n){
        cout << count_char << " ";
        count_char++;
        j++;
    }
    cout << endl;
i++;
}
}