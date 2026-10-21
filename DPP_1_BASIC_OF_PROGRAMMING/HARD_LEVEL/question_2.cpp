// 2. Write a program to input a 2-digit number and print the reversed number.**

// (Eg: input 53 → output 35)

#include<iostream>
using namespace std;
 int main(){
    int n, rev=0,remainder;
    cin>>n;
    while(n>0){
        remainder=n%10;
        n=n/10;
        rev=(rev*10)+remainder;
        
    }
    cout<<rev<<endl;
    return 0;

 }