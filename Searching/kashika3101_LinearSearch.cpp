/*
Title: Implementation of Linear Search Algorithm using recursive function
Description: Given an unsorted array and an element is to be searched. If the presence of the element is encountered,then the element along with the index is represented 
else -1 is displayed
*/

#include <bits/stdc++.h>
using namespace std;
int recur_linear_Search(int arr[], int left, int right, int search) 
{ 
     if (right < left) 
        return -1; 
     if (arr[left] == search) 
        return left; 
     if (arr[right] == search) 
        return right; 
     return recur_linear_Search(arr, left+1, right-1, search); 
} 
  
int main() 
{ 
    int num,search;
    cout<<"\n Enter the size of the array";
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)
        cin>>arr[i];
    cout<<"\n Enter the element to be searched";
    cin>>search;
   
    int index = recur_linear_Search(arr, 0, num-1, search); 
    if (index != -1) 
      cout<<"\n Element "<<search<<" is available at the index "<<index;
    else
        cout<<"\n Element not found!";
    return 0; 
}

/*
Time complexity:O(n)
Sample Input: 5
              1 3 8 6 4
              8
Sample output: Element 8 is available at the index 2
*/
