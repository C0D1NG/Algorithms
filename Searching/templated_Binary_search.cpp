#include <bits/stdc++.h>
using namespace std; 
template<typename T, typename T1>
T1 bsearch(T a, T1 low, T1 high, T1 x)
{
    while(low<=high)
    {
        T1 mid = (low+high)/2;
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
    cout<<"Input size of array: ";
    int n;  cin>>n;
    vector<int>a(n);
    int i;
    cout<<"Input the elements of the vector: ";
    for(i=0;i<n;i++)cin>>a[i];
    cout<<"Input the element to be searched: ";
    int x;cin>>x;
    
    cout<<"Array after sorting: ";
    sort(a.begin(),a.end());
    for(i=0;i<n;i++)cout<<a[i]<<" ";
    int r = bsearch(a,0,n-1,x);
    
    cout<<endl;
    cout<<x;
    if(r==-1)cout<<" Not Found";
    else cout<<" Found at position: "<<r+1;
}

