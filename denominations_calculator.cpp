#include <iostream>
using namespace std;
int main(){
/*
This program tells which denominations of notes and coins according to INR are required for a given sum of money called amount.
*/
cout << "Enter the sum of money: ";
int amount;
cin >> amount;
while (amount > 0) {
        switch (amount) {
            default:
                if (amount >= 2000) {
                    int count = amount / 2000;
                    amount %= 2000;
                    cout << "2000 : " << count << endl;
                }
                break;
            case 500 ... 1999:
                if (amount >= 500) {
                    int count = amount / 500;
                    amount %= 500;
                    cout << "500  : " << count << endl;
                }
                break;
            case 200 ... 499:
                if (amount >= 200) {
                    int count = amount / 200;
                    amount %= 200;
                    cout << "200  : " << count << endl;
                }
                break;
            case 100 ... 199:
                if (amount >= 100) {
                    int count = amount / 100;
                    amount %= 100;
                    cout << "100  : " << count << endl;
                }
                break;
            case 50 ... 99:
                if (amount >= 50) {
                    int count = amount / 50;
                    amount %= 50;
                    cout << "50   : " << count << endl;
                }
                break;
            case 20 ... 49:
                if (amount >= 20) {
                    int count = amount / 20;
                    amount %= 20;
                    cout << "20   : " << count << endl;
                }
                break;
            case 10 ... 19:
                if (amount >= 10) {
                    int count = amount / 10;
                    amount %= 10;
                    cout << "10   : " << count << endl;
                }
                break;
            case 5 ... 9:
                if (amount >= 5) {
                    int count = amount / 5;
                    amount %= 5;
                    cout << "5    : " << count << endl;
                }
                break;
            case 2 ... 4:
                if (amount >= 2) {
                    int count = amount / 2;
                    amount %= 2;
                    cout << "2    : " << count << endl;
                }
                break;
            case 1:
                if (amount >= 1) {
                    int count = amount / 1;
                    amount %= 1;
                    cout << "1    : " << count << endl;
                }
                break;
        }
}
}