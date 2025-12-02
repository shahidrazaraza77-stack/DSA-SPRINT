// Print the following pattern
// Input: n = 4
// Output:
// a
// a b
// a b c
// a b c d

#include <iostream>
using namespace std;

int main(){
    int n=4;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<char ('a'+j-1)<< " " ;
            j++;

            
        }
        cout<<endl;
        i++;
    }
}