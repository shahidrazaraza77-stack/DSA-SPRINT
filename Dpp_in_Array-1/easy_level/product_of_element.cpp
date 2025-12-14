// Calculate the product of all the elements in the given array.


#include <iostream>
using namespace std ;

int main(){
    int product=1;

    int arr[6]={1,5,4,4,7,8};

    for(int i=0;i<6;i++){
        product*=arr[i];
    }
    cout << product << endl;
}