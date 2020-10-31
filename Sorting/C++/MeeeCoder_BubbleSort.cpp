#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no. of Elements = ";
    cin>>n;
    int a[n], i, j, t;
    cout<<"Enter the Elements = ";
    for(i=0;i<n;i++)cin>>a[i];

    for(i=0;i<n-1;i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
        if(a[j]>a[j+1])
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }

    }
    cout<<"Sorted Elements = ";
    for(i=0;i<n;i++)cout<<a[i]<<" ";
}