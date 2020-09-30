// Program to find Greatest Common Divisor of 2 numbers in C++

#include <iostream>
using namespace std;

int gcd(int a, int b) 
{
    if (a == 0 || b == 0)
        return 0;
    else if (a == b)
        return a;
    else if (a > b)
        return gcd(a-b, b);
    else 
        return gcd(a, b-a);
}

int main() 
{
   int num1, num2;
   cout<<"Enter 2 numbers to find Greatest Common Divisor:";
   cin>>num1>>num2;
   cout<<"GCD of "<< num1 <<" and "<< num2 <<" is "<< gcd(num1, num2);
   
   return 0;
}
// Contributed by Kritika Shah