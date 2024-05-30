#include <iostream>
using namespace std;
int main(){

/* We have to print following pattern:
   ****
   ****
   ****
   ****
i.e. n X n pattern! 
NOTE: If we take initial value of varibales like i,j as 0, 
then we can't use <= instead we'll use < only*/
cout << "Enter the value of n: ";
int n;
cin >> n;
int i = 1;
while (i<=n){
    int j = 1;
    while (j <= n){
        cout << "*";
        j++;
    }
    cout << endl;
i++;
}
}