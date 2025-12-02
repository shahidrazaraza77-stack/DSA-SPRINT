// print the following pattern
// Input: n = 4
// Output:
// 1 2 3 4
// 1 2 3
// 1 2
// 1


#include <iostream>
using namespace std;

int main(){
    int n=4;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j<< " " ;
            j++;

            
        }
        cout<<endl;
        i++;
    }
}