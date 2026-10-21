// 16. Write a program to input the total number of seconds and convert it into minutes + seconds.
#include<iostream>
using namespace std;
int main(){
    int total,min,sec;
    cin>>total;

    min=(total/60);
    sec=(total%60);
    

cout<<min<< " minutes and " << sec << " seconds" << endl;
return 0;
}
