// 1. Take a character array as input and check whether it is a **palindrome**.
//     - Example: `madam`, `level`



#include<iostream>
using namespace std ;

int main(){

    char arr[100];
    cout <<" enter the character "; 
    cin>>arr;


   int start=0, end='\0'-2;


   bool ispalindrome=true ;


   while (start<end){
    if (arr[start]!=arr[end])  {
        ispalindrome=false ;
        break;
    }
    start++;
    end--;

   }

   if (ispalindrome) cout << "palindrome ";
   else   cout <<" not palindrome ";



}