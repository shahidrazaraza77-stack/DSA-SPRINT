// Print the following pattern
// Sample Input : m = 4, n = 6
// Sample Output :
// ******
// *    *
// *    *
// ******



#include <iostream>
using namespace std;

int main() {
    int m = 4, n = 6;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

           
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}


// method 2 


#include <iostream>
using namespace std;

int main() {
    int m = 4, n = 6;

    int i = 0;
    while (i < m) {
        int j = 0;

        while (j < n) {
            
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
                cout << "*";
            else
                cout << " ";

            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}
