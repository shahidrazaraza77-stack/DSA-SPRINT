// 1. Create a character array of size 50 and take input of a **full sentence** (with spaces) 
//     - Print the sentence character by character using a loop and null character condition.


#include<iostream>
using namespace std ;

int main(){


    char sentence[50];
    cin.getline(sentence ,50);


    int i=0;


    while(sentence[i]!='\0'){
        cout<<sentence[i]<<endl;

        i++;

    }
    
    
    
    return 0;



    
}