#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void heap(int arr[], int n, int i) {
  int max = i;
  int leftChild = 2 * i + 1;
  int rightChild = 2 * i + 2;

  if (leftChild < n && arr[leftChild] > arr[max])
    max = leftChild;

  if (rightChild < n && arr[rightChild] > arr[max])
    max = rightChild;

  if (max != i) {
    swap(arr[i], arr[max]);
    heap(arr, n, max);
  }
}

void heapsort(int arr[], int n) {
  for (int i = n / 2 - 1; i >= 0; i--)
    heap(arr, n, i);

  for (int i = n - 1; i >= 0; i--) {
    swap(arr[0], arr[i]);

    heap(arr, i, 0);
  }
}

void show(int arr[], int n) {
  for (int i = 0; i < n; ++i)
    cout << arr[i] << " ";
  cout << "\n";
}

int main() {
  int ele;
  cout<<"\nEnter the number of elements:";
  cin>>ele;
  int arr[ele];
  for(int i=0;i<ele;i++)
  {
    cout<<"Enter element"<<i+1<<" :";
    cin>>arr[i];
  }
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Original array:\n";
  show(arr, n);
  heapsort(arr, n);

  cout << "Sorted array:\n";
  show(arr, n);
}
