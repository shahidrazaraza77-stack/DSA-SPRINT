// 13. Write a program to input a floating number and print only the fractional part.**

// (Eg: 12.56 → 0.56)

#include<iostream>
using namespace std;
int main()
{
    float a;
    cin>>a;

cout<< a-int(a)<<endl;
return 0;
}
