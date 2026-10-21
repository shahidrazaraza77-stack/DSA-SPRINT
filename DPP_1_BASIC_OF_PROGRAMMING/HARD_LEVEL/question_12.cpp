
// 12. Write a program to input two times (hours and minutes separately) and calculate total minutes.

#include <iostream>
using  namespace std;
int  main(){
    int h1,m1,h2,m2;
    cin>>h1>>m1>>h2>>m2;
    int total_min=(h1*60+m1)+(h2*60+m2);
    cout<<total_min<<endl;
    return 0;

}