#include <bits/stdc++.h>
using namespace std; 

int bsearch(int a[], int low, int high, int x)
{
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(a[mid]==x)
            return mid;
        else if(a[mid]>x)
            return bsearch(a,0,mid-1,x);
        else
            return bsearch(a,mid+1,high,x);
    }
    return -1;
}

int main()
{
    cout<<"Enter size of array: ";
    int n;  cin>>n;
    int a[n],i;
    cout<<"Enter the elements of the array: ";
    for(i=0;i<n;i++)cin>>a[i];
    cout<<"Enter the element to be searched: ";
    int x;cin>>x;
    
    cout<<"Array after sorting: ";
    sort(a,a+n);
    for(i=0;i<n;i++)cout<<a[i]<<" ";
    int r = bsearch(a,0,n-1,x);
    
    cout<<endl;
    cout<<x;
    if(r==-1)cout<<" Not Found";
    else cout<<" Found at position: "<<r+1;
}

