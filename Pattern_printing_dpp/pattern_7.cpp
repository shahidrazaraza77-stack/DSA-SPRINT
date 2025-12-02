// Print the following pattern
// Sample Input : n= 4
// Output :
// 1
// 1 2
// 1 2 3
// 1 2 3 4

#include <iostream>
using namespace std;

int main(){
    int n=4;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<j<< " " ;
            j++;

            
        }
        cout<<endl;
        i++;
    }
}