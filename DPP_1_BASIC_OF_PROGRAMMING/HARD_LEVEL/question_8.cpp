//8. Write a program to input a character and print the next two characters in the ASCII sequence.**

// (Eg: input A → output B, C)
#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    cout << char(c + 1) << ", " << char(c + 2) << endl;
    return 0;
}
