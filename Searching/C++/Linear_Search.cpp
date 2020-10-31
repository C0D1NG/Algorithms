#include<iostream>
#include<time.h>
#define CLOCKS_PER_SEC 1000000
using namespace std;
int i,j;

int linear(int a[], int n, int num)
{
    for (i = 0; i < n; i++)
        if (a[i] == num)
            return i;
    return -1;

}
int main()
{
    clock_t start,stop;
    double cpu_time_used;

    int n,a[50],num;
    cout<<"LINEAR SEARCH\nEnter size ";
    cin>>n;

    cout<<"Enter number to be searched ";
    cin>>num;

    cout<<"Enter array ";
    for(i=0;i<n;i++)
        cin>>a[i];

    start=clock();
    int result=linear(a,n,num);
    (result == -1)? cout<<num<<" is not present in array"
                 : cout<<num<<" is present at index " <<result;

    stop=clock();

    cpu_time_used=((double)(stop-start))/CLOCKS_PER_SEC;

    cout<<"\nTime taken "<<cpu_time_used<<" seconds";

    return 0;
}
