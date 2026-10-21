// Write a program to print a character array in reverse order.


#include <iostream>

using namespace std ;

int main(){

    char ch[100];
    cin.getline(ch,100);

    int len=0;

    while(ch[len]!='\0'){
        len++;

    }

    for (int i=len-1;i>+0;i--){
        cout <<ch[i];
    }

    return 0;
    



}