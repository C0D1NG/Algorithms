#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
  int arr[10];
  int n = 10;
  int temp;
  cout<<"Enter array"<<endl;
  for(int i=0; i<n; i++)
    {
      cin>>arr[i];
    }

  for(int j = 0; j<n; j++)
    for(int i=0; i<(n-j-1); i++)
      {
        if(arr[i]>arr[i+1])
          {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;

          }
        /*for(int j=i; j<n; j++)
          {
            if(arr[j]<min)
              {
                min = arr[j];
                min_index = j;
              }

          }
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;*/

      }
  cout<<"The sorted array is"<<endl;
  for(int i=0; i<n; i++)
    {
      cout<<arr[i]<<" ";
    }
}
