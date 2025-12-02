// Print the following pattern
// Input : n = 4
// Output :
// A
// A B
// A B C
// A B C D


#include <iostream>
using namespace std;

int main(){
    int n=4;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<char (64+j)<< " " ;
            j++;

            
        }
        cout<<endl;
        i++;
    }
}