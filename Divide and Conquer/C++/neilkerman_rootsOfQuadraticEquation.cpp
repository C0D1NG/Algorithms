#include<iostream>
using namespace std;
#define EPSILON 0.01

double f(double x)
{
    return x*x*x - x*x + 2;
}

void bisection(double start, double end)
{
    if (f(start) * f(end) >= 0)
    {
        cout << "You have not assumed right start and end\n";
        return;
    }
 
    double c = start;
    while ((end-start) >= EPSILON)
    {

        middle = (start+end)/2;

        if (f(middle) == 0.0)
            break;

        else if (f(middle)*f(start) < 0)
            end = middle;
        else
            start = middle;
    }
    cout << "The value of root is : " << c;
}

int main()
{
    double start =0, end = 1000;
    bisection(start, end);
    return 0;
}