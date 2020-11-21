#include<bits/stdc++.h>
using namespace std; 
int main()
{
	int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int i,a[n],pos,f=0,x;
    cout<<"Enter the elements of the array: ";
    for(i=0;i<n;i++)
    	cin>>a[i];

    cout<<"Enter the element to be searched: ";
    cin>>x;

    for(i=0;i<n;i++)
        {
        	if(a[i]==x)
	            {
	            	f=1;
	            	pos=i;
	            	break;
	            }
	    }
    cout<<x;
    if(f==0)cout<<" NOT present";
    else cout<<" Present at position: "<<pos+1;
}

