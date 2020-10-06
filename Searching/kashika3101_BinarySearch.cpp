/*
Title: Binary Search Algorithm using Recursion
Description: A program which helps to find the target element for a sorted array
*/
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int left, int right, int search) 
{ 
if (right >= left) 
{ 
    int mid = left + (right - left)/2; 
  
    //Base case to check if the searched element is the middle element
    if (arr[mid] == search) 
        return mid; 
  
    // If element is smaller than middle element, then it can only be present in left subarray 
    if (arr[mid] > search)
        return binarySearch(arr, left, mid-1, search); 
  
    // Otherwise the element can only be present in right subarray 
    return binarySearch(arr, mid+1, right, search); 
   } 
  
return -1; 
} 
  
int main() 
{ 
   int size,element;
   cout<<"\n Enter the size of the array";
   cin>>size;
   int arr[size];
   
   for(int i=0;i<size;i++)
         cin>>arr[i];
   cout<<"\n Enter the element to be searched";
   cin>>element;
   int result = binarySearch(arr, 0, size-1, element); 
   
   if(result == -1)
        cout<<"\n Element is not present in array";
   else
        cout<<"\n Element "<<element<<" is present at index "<<result; 
   return 0; 
}
/*
Time complexity:O(log n)
Space Complexity=O(1)
sample Input:5
             1 2 3 4 5
             4
Sample Output:Element 4 is present at index 3
*/
