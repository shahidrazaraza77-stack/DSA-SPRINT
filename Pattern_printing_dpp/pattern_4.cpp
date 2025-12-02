// Print the following pattern
// Input: n = 5
// Output:
// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5


#include <iostream>
using namespace std;

int main() {
    int n=5;
    int i = 1;

    while (i <= n) {

  
        if (i % 2 == 1) {
            int j = 1;
            while (j <= i) {
                cout << j << " ";
                j++;
            }
        } 
    
        else {
            char ch = 'A';
            int count = 1;
            while (count <= i) {
                cout << ch << " ";
                ch++;
                count++;
            }
        }

        cout << endl;
        i++;
    }

    return 0;
}
