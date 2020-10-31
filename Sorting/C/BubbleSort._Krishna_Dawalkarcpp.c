#include <iostream>
using namespace std;
void display(int[20],int);  //Function Declaration

int main()
{
 void bubble(int[20],int);//Function Declaration
 void bubble1(int[20],int);
 void bubble2(int[20],int);
 int i;
 int a[4]={11,-1,33,44};

// bubble1(a,4);
 bubble(a,4);
 //bubble2(a,4);
}


void bubble(int a[20],int n)
{
     int t,pass,j,com=0,flag=1;

      for(pass=0;pass<n-1 ;pass++)//  passses
      {
	    com=0;   flag=0;
	 for(j=0;j<n-pass-1;j++)// comparsions
	 {
	    if(a[j]>a[j+1]) //swap
	    {
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
		com++;     flag=1;
	       }//end of if
	 }//end of inner for
	 cout<<"\n\nPass  :"<<pass+1;
	 display(a,n);
           if(flag==0)    break;
	 cout<<"\n Number of Comparsions :"<<j-1;
      }//end of outer for

}//end of bubble
void bubble1(int a[20],int n)
{
     int t,pass,j,com=0,flag=1;

      for(pass=0;pass<n-1 ;pass++)  // Number of Passes
      {
	  com=0;
	 for(j=0;j<n-pass-1;j++)  //for Comparsion
	 {
	    if(a[j]>a[j+1])  //Swap
	    {
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
		com++;
	       }//end of inner for
	 }//end of inner for
	 cout<<"\n\nPass  :"<<pass+1;
	 display(a,n);
	 cout<<"\n Number of Comparsions :"<<j-1;
      }//end of outer for
}//end of bubble

void bubble2(int a[20],int n)
{
     int t,pass,j,com=0,flag=1;

      for(pass=0;pass<n-1 ;pass++)  // Number of Passes
      {
	  for(j=0;j<n-pass-1;j++)  //for Comparsion
	 {
	    if(a[j]>a[j+1])  //Swap
	    {
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;

	     }//end of inner for
	 }//end of inner for
     }//end of outer for
      display(a,n);
}//end of bubble



void display(int a[20],int n)
{
  int i;
  for(i=0;i<n;i++)
     cout<<"\t"<<a[i];
}



