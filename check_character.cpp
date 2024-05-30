#include <iostream>
using namespace std;

int main(){
cout << "Enter any character, a-z or A-Z, or 0-9: ";
char a;
cin >> a;
if (a >= 'a' and a <= 'z'){
    cout << "Its a lowercase! " << endl;
}
else if (a >= 'A' and a <= 'Z'){
    cout << "Its an uppecase!" << endl;
}
else if (a >= '0' and a <= '9'){
    cout << "Its a number!" << endl;
}
else{
    cout << "Its neither an uppercase, neither lowercase, nor a number.";
}
}
