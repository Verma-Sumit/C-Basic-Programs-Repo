#include <iostream>
using namespace std;
int main(){
cout << "Enter a number: ";
int n;
int i = 2; //as 1 is neither prime nor composite
cin >> n;
while (i<n){   // we didn't take <= as if i will be equal to number itself, it'll be treated as a prime
    if (n % i ==0){
        cout << "Its not a prime for " << i << endl;
    }
    else {
        cout << "Its a prime for " << i << endl;
    }    
    i++;
}
}