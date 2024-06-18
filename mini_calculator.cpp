#include <iostream>
using namespace std;
int main(){
cout << "Enter the value of a :" << endl;
int a,b;
cin >> a;
cout << "Enter the value of b :" << endl;
cin >> b;

char operation;
cout << "Enter the operation you want to perform :";
cin >> operation;

switch (operation){
    case '+': cout << (a+b) << endl;
        break;
    case '-': cout << (a-b) << endl;
        break;
    case '*': cout << (a*b) << endl;
        break;
    case '/': cout << (a/b) << endl;
        break; 
    case '%': cout << (a%b) << endl;
        break;
    default : cout << "Enter valid operation!"<< endl;
   
}
}