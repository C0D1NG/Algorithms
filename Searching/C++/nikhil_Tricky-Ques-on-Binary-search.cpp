## Given an integer x,find the maximum  element y in an array of size N such that it satisfies the condition y<=x

Solution:

#include<iostream>

using namespace std;

int binsearch(int arr[],int left,int right,int x)
{
static int result=0;
if(right<=left)
{
int mid=(left+right)/2;
if(arr[mid]<x)
{
if(arr[mid]>result)
{
result=arr[mid];
}
return binsearch(arr,mid+1,right,x);
}
if(arr[mid]>x)
{
return binsearch(arr,left,mid-1,x);
}
}
retun result;
}

int main(void) 
{ 
    int arr[] = {3,5,7,8,9,11,15,17,19,22,25,27,29}; 
    int x = 28; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = binarySearch(arr, 0, n - 1, x); 
   
    cout << "Element is present at index " << result; 
    return 0; 
} 
