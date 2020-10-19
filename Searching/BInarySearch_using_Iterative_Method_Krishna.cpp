#include <iostream>
using namespace std;
int  binrec(int a[10],int n,int key)
{
   int s,mid,low,high;

   low=0;high=n-1;

   while(low<=high)
      {
	mid=(low+high)/2;
            if(a[mid]==key)
	           return mid; //return loc if no is present
	else if(a[mid]>key)
	          high=mid-1;  // left half
	else
	        low=mid+1;  //right half
     }//end of while

     return -1;//return -1  if no is present
}//end of function

int main()
{  int a[20],n,find,loc,i;

cout<<"\n Enter  the sorted number ";
cout<<"\nEnter Total Numbers of the array : ";
    cin>>n;

    /* Input elements in the array */
    cout<<"Enter elements in array : ";
    for(i=0; i<n; i++)
       cin>>a[i];


   cout<<"\n Enter number to be find :";
  cin>>find;

  loc=binrec(a,n,find);
   if(loc==-1)
     cout<<"\n Number not found ";
  else
     cout<<"\n Number present at "<<loc+1;
 }

