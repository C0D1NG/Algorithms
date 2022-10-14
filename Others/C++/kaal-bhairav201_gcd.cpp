#include <iostream>
using namespace std;
int gcd(int x, int y)
{
    int result = min(x, y); 
    while (result > 0) {
        if (x % result == 0 && y % result == 0) {
            break;
        }
        result--;
    }
    return result; 
}
 
int main()
{
    int x = 98, y = 56;
    cout << "GCD of " << x << " and " << y << " is "
         << gcd(x, y);
    return 0;
}
