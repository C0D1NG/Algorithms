#include <stdio.h>
#include <stdlib.h>
void mergeSort(int a[],int n);
void Merge(int b[ ],int c[ ],int a[ ],int p,int q)
{
int i=0,j=0,k=0;
while(i<p&&j<q)
{
 if(b[i]<=c[j])
{
a[k]=b[i];
i++;
}
else
{
  a[k]=c[j];
  j++;
}
 k++;
}
if(i==p)
{
  while(j<q)
{
   a[k]=c[j];
    j++;
    k++;
}}
else
{
 while(i<p)
{
a[k]=b[i];
i++;
k++;
} } }
void mergeSort(int a[ ],int n)
{
int i,j,p,q;
int b[100],c[100];
if(n>1)
{
    for(i=0;i<n/2;i++,j++)
    {
        b[i]=a[i];
    }
    p=i;
    for(i=n/2,j=0;i<n;i++,j++)
    {
        c[j]=a[i];
    }
q=j;

mergeSort(b,p);
mergeSort(c,q);
Merge(b,c,a,p,q);
} }
int main( )
{
int i,n,a[100];
printf("Enter the number of elements : ");
scanf("%d",&n);
printf("Enter %d elements :\n",n);
for(i=0; i<n;i++)
scanf("%d",&a[i]);
mergeSort(a,n);
printf("\nArray after sorting:\n");
for(i=0;i<n;i++)
printf("\t%d",a[i]);
return 0;
}
