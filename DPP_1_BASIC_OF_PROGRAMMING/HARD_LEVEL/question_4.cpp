// 4. Write a program to input total minutes and convert it into hours and minutes.**

// (Eg: 130 → 2 hours 10 minutes)

#include<iostream>
using namespace std;
int main(){
    int total_minutes;
    cin>>total_minutes;
    int hours= total_minutes / 60;
    int minutes= total_minutes % 60;
    cout<< hours <<" " << minutes <<endl;
    return 0;
}