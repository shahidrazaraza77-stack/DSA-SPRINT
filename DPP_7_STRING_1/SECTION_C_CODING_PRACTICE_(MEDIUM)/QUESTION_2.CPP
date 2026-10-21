// Write a program to count the length of a character array without using strlen().



#include<iostream>
using namespace std ;


int main(){


    char ch[20];
     
    cin.getline(ch,20);


    int len=0;

    for (int i=0;ch[i]!='\0';i++){
        len++;

    }
    cout<<" length of the string"<< len;

    return 0;

}