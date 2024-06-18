#include <iostream>
using namespace std;
int main(){

// Left shift operators and right shift operators shift the bits towards right and left in the mentioned magnitude
// While left/right shifting postive number, padding is done with zeroes, but for negative numbers, its compiler dependent.
cout << (10>>2) << endl;
cout << (43>>3) << endl;
cout << (52<<2) << endl;
cout << (10<<2) << endl;

}