// 7. Write a program to input the total amount and percentage and find the final discounted value.**

// (Eg: amount=1000, discount=10 → 900)

#include<iostream>
using namespace std ; 

int main(){
    int amount,percent;
    cin>>amount>>percent;
    double discount=(amount*percent)/100;
    cout<<amount-discount<<endl;
    return 0;

}