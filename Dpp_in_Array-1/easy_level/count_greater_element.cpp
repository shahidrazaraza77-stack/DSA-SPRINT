// Count how many elements are greater than 100.


#include <iostream>
using namespace std ;

 int main(){
    int n;
    cout<<" enter the size of array  " ; 
    cin>>n;

    int count =0;

    int arr[n];

    for (int i=0; i<n;i++){
        cout <<" enter the value of elemnt   ";
        cin>>arr[i];
    }
    
    for (int i=0;i<n;i++){
        if (arr[i]>100){
            
            count++;

        }
    }
    cout<< count << endl;



 }