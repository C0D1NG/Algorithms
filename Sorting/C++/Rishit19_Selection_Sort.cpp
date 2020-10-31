#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
  int arr[1000];
  int size;
  // int n = 10;
  int min;
  int min_index = 0;
  int temp;
  cout<<"Enter the size of array"<<endl;
  cin>>size;
  cout<<"Enter array"<<endl;
  for(int i=0; i<size; i++)
    {
      cin>>arr[i];
    }
  for(int i=0; i<size; i++)
    { min = arr[i];
      min_index = i;
      for(int j=i; j<size; j++)
        {
          if(arr[j]<min)
            {
              min = arr[j];
              min_index = j;
            }

        }
      temp = arr[i];
      arr[i] = arr[min_index];
      arr[min_index] = temp;

    }
  cout<<"The sorted array is"<<endl;
  for(int i=0; i<size; i++)
    {
      cout<<arr[i]<<" ";
    }


}
