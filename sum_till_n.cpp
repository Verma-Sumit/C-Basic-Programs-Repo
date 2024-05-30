#include <iostream>
using namespace std;
int main(){
    cout << "Enter a number till the sum you want: " ;
int a;
int sum = 0;
cin >> a;
int i = 1;
while (i <= a){
    sum = sum+i;
    i++;    
}
cout <<sum;
}