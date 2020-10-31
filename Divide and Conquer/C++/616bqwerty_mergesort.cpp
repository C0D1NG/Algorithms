#include<iostream>
#include<stdlib.h>

using namespace std;

void merge(int *a,int *l,int *r,int lc,int rc)  //function to merge
{
    int i=0,j=0,k=0;
    while(j<lc&&k<rc)
    {
        if(l[j]<r[k])
        {
            a[i]=l[j];
            j++;
        }
        else
        {
            a[i]=r[k];
            k++;
        }
        i++;
    }
    while(j<lc)
    {
        a[i]=l[j];
        i++;
        j++;
    }
    while(k<rc)
    {
        a[i]=r[k];
        i++;
        k++;
    }
}

void mergesort(int *a,int n)   //function to divide into arrays l and r
{
    int *l,*r,i,j,mid;
    if(n<2)
        return;
    mid=n/2;
    l=(int*)malloc(mid*sizeof(int));
    r=(int*)malloc((n-mid)*sizeof(int));
    i=0;
    j=0;
    while(i<mid)
    {
        l[j]=a[i];
        j++;
        i++;
    }
    j=0;
    while(i<n)
    {
        r[j]=a[i];
        j++;
        i++;
    }
    mergesort(l,mid);
    mergesort(r,n-mid);
    merge(a,l,r,mid,n-mid);
}

int main(void)
{
    int n,*arr,_,t,i;
    cin>>t;      //numner of test cases
    for(_=0;_<t;_++)     //iteration for test cases
    {
        cin>>n;         //number of elements
        arr=(int*)malloc(n*sizeof(int));
        for(i=0;i<n;i++)
            cin>>arr[i];
        mergesort(arr,n);  
        cout<<"Sorted array is:\n";
        for(i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<"\n";
    }
    return 0;
}