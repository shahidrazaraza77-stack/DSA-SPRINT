// 1. Take input integer n and print “Alpha Intern” n times.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        cout<<"alpha intern"<< endl;
    }

return 0;
}
// ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// 2.Take input integer n and print numbers from 1 to n.

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        cout<<i<<endl;
    }
    return 0;

}
// '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

// 3.Take input integer n and print numbers from n down to 1.

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=n;i>=1;i--){
        cout<<i<<endl;
    }
    return 0;

}

// '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// 4.Take input integer n and print all even numbers from 1 to n.

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=0;i<=n;i+=2){
        cout<<i<<endl;
    }
    return 0;

}

// '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

//  5.Take input integer n and print all odd numbers from 1 to n.

#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    for (int i=1;i<=n;i+=2){
        cout<<i<<endl;
    }
    return 0;

}

// ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

// 6. Take input integers a, d, n, and print the first n terms of AP starting from a.

#include <iostream>
using namespace std;

int main(){
    int a,d,n;
    cin>>a>>d>>n;
    for(int i=0;i<n;i++){
        cout<< a + i*d <<endl;
    }

}

// ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

// 7. Take input integer n, and print the AP 100, -97, -94… but only show the positive terms.

#include <iostream>
using namespace std;
 int main (){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int ap= n- i*3;
        if(ap>0){
            cout<<ap<<endl;
        }
        
     }
     return 0;

 }
//  ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// 8.  Take input integers a, r, n and print the first n terms of GP.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a,r,n;
    cin>>a>>r>>n;
    for(int i=0;i<n;i++){
        cout<< a * (pow(r,i)) <<endl;
    }

}
 
// ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// 9. Take input integer n and print numbers from 1 to n using a while loop.


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;


    while(i<=n){
        cout<<i<<endl;
        i++;

    }

}

// '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// 10. Take input integer n and print the sum from 1 to n.
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for (int i=1;i<=n;i++){
        sum=sum+i;
        cout<<sum<<endl;

    }
}
// '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
//  11. Take input integer n and print all multiples of 3 from 1 to n using a while loop.

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
     int i=1;
    while(i<=n){
        cout<<3*i<<endl;
        i++;
    }
}

// ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

//12. Take input integer n and print the factorial of n using a for loop.

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=1;
    for (int i=1;i<=n;i++){
        sum=sum*i;
        cout<<sum<<endl;

    }
}



// ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''