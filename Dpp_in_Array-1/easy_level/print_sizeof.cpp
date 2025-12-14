// Take an array input and prints its size

#include <iostream>
using namespace std ;
int  main(){
    int n;
    cout<< " enter the size of array" ;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout <<"enter the element ";
        cin>>arr[i];

    }
    cout << " size of array"<<sizeof(arr) << endl; 
    return 0;

}