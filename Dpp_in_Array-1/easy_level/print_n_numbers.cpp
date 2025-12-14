// Take input of N integers  array and print them.

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
    for (int i = 0;i<n;i++ ){
        cout<<arr[i]<<" ";
    }
    return 0;

}