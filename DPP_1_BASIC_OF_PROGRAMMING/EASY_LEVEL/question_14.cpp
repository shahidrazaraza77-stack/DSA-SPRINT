// 14. Write a program to input a character digit (‘5’) and convert it into its integer value using ASCII subtraction (c - '0').
#include<iostream>
using namespace std;
int main()
{
char ch;
cin>>ch;
cout<< ch - '0' <<endl;
return 0;
}