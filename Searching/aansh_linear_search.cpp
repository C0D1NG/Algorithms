// #include <bits/stdc++.h> 
#include <iostream>
#include<vector>
using namespace std; 

int search(vector<int> arr, int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 
  
// Driver code 
int main() 
{ 
    vector<int> arr;
    int n;
    int x;
    cout<<"Enter the number of elements in input :   ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the input value of element "<<i+1<<" : ";
        int p;
        cin>>p;
        arr.push_back(p);
    }
    cout<<"Enter the value to be searched:   ";
    cin>>x;
    int index = search(arr, n, x); 
    if (index == -1) 
        cout << "Element is not present in the array"; 
    else
        cout << "Element found at position " << index; 
  
    return 0; 
}