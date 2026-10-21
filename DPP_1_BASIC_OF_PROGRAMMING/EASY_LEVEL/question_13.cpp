// 13. Write a program to input two integers a and b, convert them into double using type casting, and print the floating division result.
#include<iostream>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
float c=double (a)/double (b);



cout<< c<<endl;
return 0;
}