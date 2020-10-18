#include<iostream>
#include<time.h>
#define CLOCKS_PER_SEC 1000000
using namespace std;
int i,j;
void bubble( int n, int a[])
{
    int temp;
        for(i=0;i<n;i++){
            for(j=0;j<n-i;j++){
                if(a[j]>a[j+1]){
                   temp=a[j];
                   a[j]=a[j+1];
                   a[j+1]=temp;
                }
            }
        }
}

int main()
{
    clock_t start,stop;
    double cpu_time_used;

    int n,a[50];
    cout<<"BUBBLE SORT\nEnter size ";
    cin>>n;

    cout<<"Enter array ";
    for(i=0;i<n;i++)
        cin>>a[i];

    start=clock();
    bubble(n,a);
    cout<<"Sorted array ";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    stop=clock();

    cpu_time_used=((double)(stop-start))/CLOCKS_PER_SEC;

    cout<<"\nTime taken "<<cpu_time_used<<" seconds";;

    return 0;
}
