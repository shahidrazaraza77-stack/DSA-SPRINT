// 18. Write a program to input a double number, cast it to int, then print:**

// - integer part
// - decimal part
// - integer part + decimal part (as double)

#include<iostream>
using namespace std;
int main()
{
    double a;
    cin>>a;

cout<<int(a) <<endl;
cout<<a-int(a) <<endl; 
cout<<int(a) + (a - int(a))<<endl;
return 0;
}