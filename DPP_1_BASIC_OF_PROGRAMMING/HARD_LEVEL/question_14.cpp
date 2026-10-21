// 14. Write a program to input a 4-digit year and print the last two digits.**

// (Eg: 2025 → 25)

#include<iostream>
using namespace std;
int main()
{
    int year;
    cin>>year;
    cout<< year % 100 <<endl;
return 0;
}
