// // 1. Predict the output

// // #include <iostream>
// // using namespace std;
// // int main() {
// //     while ('1' < '2')
// //     cout << "In while loop" << endl;
// // }

// // output===>  infinite in while loop 

// // ......................................................................................

// // 2. Predict the output


// #include <iostream>
// using namespace std;
// int main( ) {
// int t = 10;
// while (t /= 2) {
// cout << "Hello" << endl;
// }
// }


// // output ===>hello 
// //            hello
// //            hello

// // ..........................................................................................

// //  3. Predict the output 

// #include<iostream>
// using namespace std;

// int main() 
// {
// int i=0, x=0;

// for(i=1; i<10; i*=2)
// {
//     x++;
//     cout<<x;
// }
// cout<<x;
// }

// // output ===> 12344

// // ..............................................................................................

// //  4. Predict the output


// #include<iostream>
// using namespace std;

// int main()
// {
	// for(int i=1;i<=2;i++)
	// {
		// for(int j=i;j<=2;j++)
		// 	// cout<<i<@;
		// }
		// }
		
		// // output==> compile time error 
		
// .........................................................................................................
 //  5. Predict the output
// #include <bits/stdc++.h>
// using namespace std;
// int main( ) {
// for (int x = 1; x * x <= 10; x++){
// 	cout << "In for loop" << endl;
//  }
// }


// output===> In for loop
// 		   In for loop
// 		   In for loop
// // ..........................................................................................

// //  6. Predict the output


// #include <bits/stdc++.h>
// using namespace std;
// int main( ) {
// int x = 10, y = 0 ;
// while ( x >= y ) {
// x-- ;
// y++ ;
// cout << x << " " << y << endl ;
// }
// }

// output ====>9 1
// 		       8 2
//             7 3
//             6 4
//             5 5
//             4 6


// ............................................................................................................

// 7. WAP to print the sum of all the even digits of a given number.
// `Sample Input : 4556
// Output: 10`

#include <iostream>
using namespace std;
int main(){
	int n,sum=0,digit ;
	cout<<"enter the value of n";
	cin>>n;
	while(n>0){
		digit =n%10;
		if (digit%2==0){
			sum=sum+digit;
		}
		n=n/10;
	}
	cout<<"Sum of even digits: "<<sum<<endl;
	return 0;
}


// ...............................................................................................

// 8.  WAP to print the sum of a given number and its reverse.
// Sample Input : 12
// Sample Output : 33 [12+21]

#include <iostream>
using namespace std;

int main(){
	int n, reverse=0,sum;
	cout<< "enter the value of n ";
	cin>>n;
	sum=n;


	while (n>0){
		int digit = n%10;
		reverse = reverse*10 + digit;
		n=n/10;
		

	}
	cout<<" the sum of the reverse is "<<reverse+sum<<endl;
	return 0;

}

// ............................................................................................

// 9. Print the factorials of first ‘n’ numbers
// Sample Input : 10

#include <iostream>
using namespace std;
int main(){
	int n, sum=1;
	cin>>n;
	for (int i=1;i<=n;i++){
		sum=sum*i;
		cout<<sum<< endl;
	}

}
// Sample Output : 3628800

// ..........................................................................................................

// 10.Print first n’ Fibonacci numbers.

#include <iostream>
using namespace std;

int main(){
	int n,a=0,b=1,next;
	cin>>n;
	cout<<a<<endl;
	cout<<b<<endl;
	for(int i=2;i<n;i++){
		next=a+b;
		cout<<next<<endl;
		a=b;
		b=next;
	}
	return 0;
}

// ..............................................................................................

// 11.Find the sum of the first n natural numbers. Take n input from the user?

#include <iostream>
using namespace std ;

int main(){
	int n,sum=0;
	cin>>n;
	for (int i=1;i<n;i++){
		sum=sum+i;
		cout<<sum<<endl;
	}
}

// .....................................................................................................................
// 12. Write a program in C++ to find a prime number within a range.

// `Input number for starting range: 1
// Input number for ending range: 100
// The prime numbers between 1 and 100 are:
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
// The total number of prime numbers between 1 to 100 is: 25`

#include <iostream>
using namespace std;

int main() {
    int start, end, count = 0;

    cout << "Input number for starting range: ";
    cin >> start;
    cout << "Input number for ending range: ";
    cin >> end;

    cout << "The prime numbers between " << start << " and " << end << " are:" << endl;

    for (int i = start; i <= end; i++) {
        if (i <= 1) continue; // Skip 0 and 1
        bool isPrime = true;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
            count++;
        }
    }

    cout << "\nThe total number of prime numbers between " << start << " to " << end << " is: " << count << endl;

    return 0;
}



// ........................................................................................................................

// 13 .. Print the sum of this series :
// 1 - 2 + 3 - 4 + 5 - 6… upto ‘n’.


#include <iostream>
using namespace std;

int main(){
	int n,sum=0;
	cout<<"enter the value of n ";
	cin>>n;
	for (int i=1;i<=n;i++){
		if(i%2==0){
			sum=sum - i;
		}
		else{
			sum=sum + i;
		}
	}
	cout<<"the sum of the series is "<<sum<<endl;
	return 0;

}
// .......................................................................................................................

// 14. Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.

// **Sample Output:**
// `Input the first number: 25
// Input the second number: 15
// The Greatest Common Divisor is: 5`

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Input the first number: ";
    cin >> a;

    cout << "Input the second number: ";
    cin >> b;

    int gcd = 1;

    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    cout << "The Greatest Common Divisor is: " << gcd << endl;

    return 0;
}
// ...................................................................................................

// 15. Write a program in C++ to display the cube of the number up to an integer.

// **Sample Output:**
// `Input the number of terms : 5
// Number is : 1 and the cube of 1 is: 1
// Number is : 2 and the cube of 2 is: 8
// Number is : 3 and the cube of 3 is: 27
// Number is : 4 and the cube of 4 is: 64
// Number is : 5 and the cube of 5 is: 125`

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input the number of terms: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int cube = i * i * i;
        cout << "Number is : " << i << " and the cube of " << i << " is: " << cube << endl;
    }

    return 0;
}
// ...................................................................................................................