//Name-Nishikanta Ray
//github link-https://github.com/NishikantaRay
//Program name-Gratest common Divisior
#include<iostream>
using namespace std;
int gcd(int m, int n) {
    while(m!=n){
    	if(m>n){
            m=m-n;
            return m;
        }
		else{
            n=n-m;
            return n;
        }	
	}
}
int main() {
   cout << " Enter the two numbers: ";
   int m,n;
   cin >> m >> n;
   cout << " The GCD of two num bers is: " << gcd(m, n) << endl;
}