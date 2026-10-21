// Input a string of even length and Reverse the first half of the string.

#include <iostream>
#include <algorithm>
using namespace std ;

int main(){

string  s;
cin>>s;



int i =0; 
int j=(s.length()/2)-1;

while (i<j){
    swap(s[i],s[j]);

    i++;
    j--;
}

cout << s;

return 0;



}