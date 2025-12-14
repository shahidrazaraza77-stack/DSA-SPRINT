// Count how many elements are prime numbers.

#include <iostream>
using namespace std ;

int main(){

    int arr[5]={4,5,6,8,7};

    int count =0;

    
    for (int i=0;i<5;i++){
         int num=arr[i];

        if (num%2!=0){
          count++;


        }
     }
     cout << count <<endl;


}