// 2. Write a program to **replace spaces with `@`** in a character array.
//     - Input: `Alpha Intern`
//     - Output: `Alpha@Intern`



#include <iostream>
using namespace std ;

int main (){

    string str ;

    getline(cin,str);

    for (int i=0; str[i]!='\0';i++){
        if (str[i]==' ')  str[i]='@';

    }
    cout<<str;
    
   

 


}