// 12. Write a program to input an integer and print:**

// - value before post-increment (x++)
// - value after post-increment
// - value after pre-increment (++x)
#include<iostream>
using namespace std;
int main()
{
int x;
cin>>x;

cout<< x++<<endl;
cout<< x<<endl;
cout<< ++x<<endl;

return 0;
}