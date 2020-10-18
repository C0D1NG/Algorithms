#include<iostream>
#include<time.h>
#define CLOCKS_PER_SEC 1000000
using namespace std;
int i,j;
void selection( int n, int a[])
{
    int small,pos,temp;
    for(i=0;i<n;i++){
        small=a[i];
        pos=i;
        for(j=i+1;j<n;j++){
            if(a[j]<small){
                small=a[j];
                pos=j;
            }
        }
        temp=a[i];
        a[i]=a[pos];
        a[pos]=temp;
    }
}

int main()
{
    clock_t start,stop;
    double cpu_time_used;

    int n,a[50];
    cout<<"SELECTION SORT\nEnter size ";
    cin>>n;

    cout<<"Enter array ";
    for(i=0;i<n;i++)
        cin>>a[i];

    start=clock();
    selection(n,a);
    cout<<"Sorted array ";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    stop=clock();

    cpu_time_used=((double)(stop-start))/CLOCKS_PER_SEC;

    cout<<"\nTime taken "<<cpu_time_used<<" seconds";

    return 0;
}
