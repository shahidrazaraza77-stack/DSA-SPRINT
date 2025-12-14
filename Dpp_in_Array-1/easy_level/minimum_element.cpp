// Find the minimum element in the array.

#include <iostream>
using namespace std ;

int main(){
    int arr[5]={1,5,4,4,7};
    
    int minvalue=arr[0];

    for(int i=0;i<5;i++){
        if(arr[i]<minvalue){
            minvalue=arr[i];
        }
    }
    cout << minvalue<< endl;   
    
    return 0;
}
