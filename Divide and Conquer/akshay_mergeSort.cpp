#include<iostream>
using namespace std;

#define N 100

void merge(int *arr, int s, int e)
{
	int mid = (s+e)/2;
	
	int i = s;
	int j = mid + 1;
	int k = s;

	int temp[N];

	while(i<=mid && j<=e)
	{
		if(arr[i] < arr[j])
			temp[k++] = arr[i++];
		else
			temp[k++] = arr[j++];
	}
	// Copying the remaining elements (if present) of the two arrays
	while(i<=mid)
		temp[k++] = arr[i++];
	while(j<=e)
		temp[k++] = arr[j++];

	// Copying all the elements to the orignal array
	for(int i=s;i<=e;i++)
	{
		arr[i] = temp[i];
	}
}

void mergeSort(int *arr, int s, int e)
{
	// Base Case - 1 or 0 elements
	if(s==e)
		return;

	// Follow 3 steps
	// 1. Divide
	int mid  = (s + e)/2;

	// 2. Recursively divide the arrays - (left) from s,mid and (right) from mid+1,e
	mergeSort(arr,s,mid);    // Left array
	mergeSort(arr,mid+1,e);  //Right array

	// 3. Merge the two arrays
	merge(arr,s,e);
}

int main()
{
	int arr[] = {10,9,3,7,8,2};

	mergeSort(arr,0,6);

	for(int i=0;i<6;i++)
		cout<<arr[i]<<" ";
	return 0;
}
