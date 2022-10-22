#include <iostream>
using namespace std;

int search(int arr[], int N, int x)
{
	int i;
	for (i = 0; i < N; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

int main(void)
{
	int arr[] = { 6,7,8,9,10,69 };
	int x = 10;
	int N = sizeof(arr) / sizeof(arr[0]);


	int result = search(arr, N, x);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}
