// 3. Take a character array as input and print:
//     - Total number of vowels
//     - Total number of consonants

#include <iostream>
using namespace std;

int main() {
    char str[100];
    cin.getline(str, 100);

    int vowels = 0, consonants = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check for alphabets
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // Check vowels
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "Total vowels: " << vowels << endl;
    cout << "Total consonants: " << consonants << endl;

    return 0;
}
