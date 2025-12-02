// Print the following pattern
// Input: n = 4
// Output:
// 1
// 2 1
// 3 2 1
// 4 3 2 1



#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int i = 1;

    while (i <= n) {
        int j = i;
        while (j >= 1) {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }

    return 0;
}
