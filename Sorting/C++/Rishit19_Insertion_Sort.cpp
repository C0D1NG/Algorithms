#include<iostream>
using namespace std;

int main(void)
{
  int curr_element;
  int j;
  int size;
  int arr[1000];
  cout<<"Enter the size of the array"<<endl;
  cin>>size;
  cout<<"Enter the array"<<endl;
  for(int i=0; i<size; i++)
    cin>>arr[i];
 
  //int n = sizeof(arr)/sizeof(arr[0]);
  for(int i=0; i<size; i++)
    { j = i-1;
      curr_element = arr[i];
      while(j>=0 && arr[j]>curr_element)
        {
          arr[j+1] = arr[j];
          j--;
        }
      arr[j+1] = curr_element;

    }
  cout<<"Sorted array is"<<endl;
  for(int i=0; i<size; i++)
    cout<<arr[i]<<" ";
}
