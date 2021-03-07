 #include <iostream> 
using namespace std; 

//iterative way
int binarySearch(int arr[], int left, int right, int x) 
{ 
	while (left <= right) { 
		int mid = left + (right - left) / 2; 

		if (arr[mid] == x) 
			return mid; 

		
		if (arr[mid] < x) 
			left = mid + 1; 

		
		else
			right = mid - 1; 
	} 


	return -1; 
} 

int main() 
{ 
	int arr[] = { 12, 23, 31, 45, 70, 200 }; 
    int x = 45; 
    int n = sizeof(arr) / sizeof(arr[0]); 
	int result = binarySearch(arr, 0, n - 1, x); 
	(result == -1) ? cout << "Element is not present in array"
				: cout << "Element is present at index " << result; 
	return 0; 
} 
