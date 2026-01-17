// easy level .............................


// 1. Write a program to take two integers as input and print their sum, difference, product, and quotient (integer division only).
#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
cout<<a+b<<endl;
cout<<a-b<<endl;
cout<<a*b<<endl;
cout<<a/b<<endl;
return 0;
}

// 2. Write a program to take an integer x as input and print the result of ++x, x++, and the final value of x.
#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;

cout<< x++<<endl;
cout<< ++x<<endl;
cout<<x<<endl;


return 0;
}
// 3. Write a program to input two integers a and b and print:**

// - a % b
// - b % a
 #include<iostream>
 using namespace std;
 int main()
 {
    int a ,b;
    cin>>a>>b;
 cout<< a % b <<endl;
 cout<< b % a <<endl;
 return 0;
 }
// 4. Write a program to input a character and print its ASCII value.

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    cout<< int(ch) <<endl;
return 0;
}
// 5. Write a program to input an ASCII value (integer) and print the corresponding character.
#include<iostream>
using namespace std;
int main()
{
int ch;
cin >> ch ;

cout<<char(ch) <<endl;
return 0;
}
// 6. Write a program to input two numbers and print the remainder when the first number is divided by the second.
#include<iostream>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;

cout<< a % b <<endl;
return 0;
}
//  7. Write a program to input an integer and print the value of:

// - x + 5
// - x - 3
// - x * 2
// - x / 2
// - x % 2
#include<iostream>
using namespace std;
int main()
{
int x;
cin>>x;

cout<<x+5 <<endl;
cout<<x-3 <<endl;
cout<<x*2 <<endl;
cout<<x/2 <<endl;
cout<<x%2<<endl;

return 0;
}
// 8. Write a program to input a double value and print its integer part using type casting.
#include <iostream>
using namespace std ;
int main(){
    double x;
    cin>>x;
    cout<<int (x)<<endl;
    return 0;

}
// 9. Write a program to input a double value and print only its decimal part.**

// (Hint: use (int) to remove integer part)
#include<iostream>
using namespace std;
int main()
{
    double x ;
    cin>>x;

cout<< x - int(x) <<endl;
return 0;
}
// 10. Write a program to input a character and print the next character using pre-increment (++).
#include<iostream>
using namespace std;
int main()
{
char ch;
cin>>ch;

cout<<++ch <<endl;
return 0;
}
// 11. Write a program to input a character and print the previous character using decrement operator.
#include<iostream>
using namespace std;
int main()
{
char ch;
cin>>ch;

cout<<--ch <<endl;
return 0;
}
// 12. Write a program to input an integer and print:**

// - value before post-increment (x++)
// - value after post-increment
// - value after pre-increment (++x)
#include<iostream>
using namespace std;
int main()
{
int x;
cin>>x;

cout<< x++<<endl;
cout<< x<<endl;
cout<< ++x<<endl;

return 0;
}
// 13. Write a program to input two integers a and b, convert them into double using type casting, and print the floating division result.
#include<iostream>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
float c=double (a)/double (b);



cout<< c<<endl;
return 0;
}
// 14. Write a program to input a character digit (‘5’) and convert it into its integer value using ASCII subtraction (c - '0').
#include<iostream>
using namespace std;
int main()
{
char ch;
cin>>ch;
cout<< ch - '0' <<endl;
return 0;
}
// 
// ### 15. Write a program to input two float numbers and print:

// - sum
// - difference
// - product
// - division

#include<iostream>
using namespace std;
int main()
{
float a, b;
cin >> a >> b;
cout << a + b << endl;
cout << a - b << endl;
cout << a * b << endl;
cout << a / b << endl;
return 0;
}
// ### 16. Write a program to input two numbers and print the result of:

// (a + b) * (a - b)
#include<iostream>
using namespace std;
int main()
{
int a ,b;
cin>>a>>b;


cout<<(a + b) * (a - b) <<endl;
return 0;
}
// ### *17. Write a program to input two integers a and b and print:*

// - (a * b) % 10
// - (a + b) % 5
int main()
{
int a ,b;
cin>>a>>b;


cout<<(a * b) % 10 <<endl;
cout<<(a + b)%5 <<endl;
return 0;
}
// 18. Write a program to input an integer and print its ASCII equivalent character if converted using char(x).
#include<iostream>
using namespace std;
int main()
{
int x;
cin>>x;
cout<< char(x) <<endl;
return 0;
}
// 19. Write a program to input a floating number and print it rounded down using type casting (convert to int).
#include<iostream>
using namespace std;
int main()
{
float x;
cin>>x;
cout<< int(x) <<endl;
return 0;
}
// 20. Write a program to input three integers a, b, c and print the value of the expression:**

// a + b * c - (++b)
#include<iostream>
using namespace std;
int main()
{ 
int a ,b ,c;
cin>>a>>b>>c;
cout<< a + b * c - (++b) <<endl;
return 0;
}  

// '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

// hard level .......

// 1. Write a program to input a 3-digit number and print the sum of its digits.**

// (Hint: Extract digits using % and /.)

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0, remainder;
    for(int i=0;i<n;i++){
       remainder=n%10;
       sum=sum+remainder;
       n=n/10;
    }
    cout<<sum<<endl;

   
return 0;
}


// 2. Write a program to input a 2-digit number and print the reversed number.**

// (Eg: input 53 → output 35)

#include<iostream>
using namespace std;
 int main(){
    int n, rev=0,remainder;
    cin>>n;
    while(n>0){
        remainder=n%10;
        n=n/10;
        rev=(rev*10)+remainder;
        
    }
    cout<<rev<<endl;
    return 0;

 }

//  3. Write a program to input your age in years and print your age in days.**

// (Assume 1 year = 365 days) 

#include<iostream>
using namespace std;

int main(){
        int age;
        cin>>age;
        cout<< age * 365 <<endl;
        return 0;
}


// 4. Write a program to input total minutes and convert it into hours and minutes.**

// (Eg: 130 → 2 hours 10 minutes)

#include<iostream>
using namespace std;
int main(){
    int total_minutes;
    cin>>total_minutes;
    int hours= total_minutes / 60;
    int minutes= total_minutes % 60;
    cout<< hours <<" " << minutes <<endl;
    return 0;
}

// 5. Write a program to input seconds and convert them into hours, minutes, and seconds

#include<iostream>
using namespace std;
int main(){
    int total_seconds;
    cin>>total_seconds;
    int hours= total_seconds / 3600;
    int minutes= (total_seconds % 3600) / 60;
    int seconds= total_seconds % 60;
    cout<< hours <<" " << minutes <<" " << seconds <<endl;
    return 0;
}

// 6. Write a program to input temperature in Celsius and convert it to Fahrenheit.**

// F = C * 9/5 + 32

#include<iostream>
using namespace std ;

int main(){
    int c;
    cin>>c;
    float  f= c*9/5+32;
    cout<<f<< endl;
    return 0;    
}

// 7. Write a program to input the total amount and percentage and find the final discounted value.**

// (Eg: amount=1000, discount=10 → 900)

#include<iostream>
using namespace std ; 

int main(){
    int amount,percent;
    cin>>amount>>percent;
    double discount=(amount*percent)/100;
    cout<<amount-discount<<endl;
    return 0;

}

//8. Write a program to input a character and print the next two characters in the ASCII sequence.**

// (Eg: input A → output B, C)
#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    cout << char(c + 1) << ", " << char(c + 2) << endl;
    return 0;
}

// 9. Write a program to input any amount of money in rupees and print how many 100-rupee notes can be made and how much money remains.**

// (use integer division & modulus)

#include <iostream>
using namespace std;
int main() {
    int amount;
    cin >> amount;
    int notes = amount / 100;
    int remainder = amount % 100;
    cout << notes << " " << remainder << endl;
    return 0;
}

// 10. Write a program to input three marks and print their average as a double value.

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    double avg= double (a + b + c) / 3;
cout<< avg <<endl;
return 0;
}

// 11. Write a program to input the radius and print the area of the circle.**

// (Use: area = 3.14 * r * r)

#include<iostream>
using namespace std;
int main()
{
    int r;
    cin>>r;
    double area = 3.14*r*r;

cout<<area<<endl;
return 0;
}

// 12. Write a program to input two times (hours and minutes separately) and calculate total minutes.

#include <iostream>
using  namespace std;
int  main(){
    int h1,m1,h2,m2;
    cin>>h1>>m1>>h2>>m2;
    int total_min=(h1*60+m1)+(h2*60+m2);
    cout<<total_min<<endl;
    return 0;

}

// 13. Write a program to input a floating number and print only the fractional part.**

// (Eg: 12.56 → 0.56)

#include<iostream>
using namespace std;
int main()
{
    float a;
    cin>>a;

cout<< a-int(a)<<endl;
return 0;
}

// 14. Write a program to input a 4-digit year and print the last two digits.**

// (Eg: 2025 → 25)

#include<iostream>
using namespace std;
int main()
{
    int year;
    cin>>year;
    cout<< year % 100 <<endl;
return 0;
}

// 15. Write a program to input any number and print whether its last digit is even or odd using modulus.**

// (Do NOT use if/else → just print the last digit and remainder.)

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    int lastDigit = num % 10;
    int remainder = lastDigit % 2;
    
    cout << "Last digit: " << lastDigit << endl;
    cout << "Remainder when divided by 2: " << remainder << endl;
    
    return 0;
}

// 16. Write a program to input the total number of seconds and convert it into minutes + seconds.
#include<iostream>
using namespace std;
int main(){
    int total,min,sec;
    cin>>total;

    min=(total/60);
    sec=(total%60);
    

cout<<min<< " minutes and " << sec << " seconds" << endl;
return 0;
}

// 17. Write a program to input two characters and print the ASCII difference between them.**

// (Eg: A and a → output 32)

#include<iostream>
using namespace std;
int main()
{
    char ch,sh;
    cin>>ch>>sh;
    
    int s=sh-ch;
    cout<<s<<endl;


return 0;
}

// 18. Write a program to input a double number, cast it to int, then print:**

// - integer part
// - decimal part
// - integer part + decimal part (as double)

#include<iostream>
using namespace std;
int main()
{
    double a;
    cin>>a;

cout<<int(a) <<endl;
cout<<a-int(a) <<endl; 
cout<<int(a) + (a - int(a))<<endl;
return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////