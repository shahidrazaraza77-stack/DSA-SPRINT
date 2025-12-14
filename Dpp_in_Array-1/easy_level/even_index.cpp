// Given an array, print elements present at even indexes.

#include<iostream>
using namespace std;
int main()
{

    int arr[6]={1,2,3,4,5,6};

    for (int i=0;i<6;i++){
        if (i%2==0){
            cout << arr[i]<< endl;
        }
    }
return 0;
}