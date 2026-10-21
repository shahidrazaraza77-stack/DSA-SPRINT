// Write a function that converts all lowercase characters to uppercase without using built-in functions.


#include <iostream>
using namespace std ;

void touppercase(char arr[]){
    int i =0;
    while(arr[i]!='\0'){
        if (arr[i]>='a'&&arr[i]<='z'){
            arr[i]=arr[i]-32;

        }
        i++;

    }
}
int main(){

    char arr[50];
    cin.getline(arr,50);
    touppercase(arr);
    cout<<arr;

    return 0;
}