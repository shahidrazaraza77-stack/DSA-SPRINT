// 1. Create your own function:
    
//     
//     int myLength(char arr[]);
    

    
//     - It should return the length of the character array.


#include <iostream>
using namespace std;

int mylenth(char arr[]){
    int count=0;
    while(arr[count]!='\0'){
        count++;
        
    }
    return count ;

}

int main(){
    char arr[50];
    cin.getline(arr,50);

    cout <<"length.."<<mylenth(arr);

    return 0;
}