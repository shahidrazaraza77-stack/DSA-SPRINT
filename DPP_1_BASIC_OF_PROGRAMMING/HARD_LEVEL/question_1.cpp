// 1. Write a program to input a 3-digit number and print the sum of its digits.**

// (Hint: Extract digits using % and /.)

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0, remainder;
    for(int i=0;i<n;i++){
       remainder=n%10;
       sum=sum+remainder;
       n=n/10;
    }
    cout<<sum<<endl;

   
return 0;
}