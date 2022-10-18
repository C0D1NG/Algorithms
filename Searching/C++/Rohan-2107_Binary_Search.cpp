#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int left, int right, int x)
{
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, left, mid - 1, x);

        return binarySearch(arr, mid + 1, right, x);
    }
 
    return -1;
}
 
int main(void)
{
    int arr[] = { 21,25,88,99,103,105 };
    int x = 88;
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = binarySearch(arr, 0, n - 1, x);
    (ans == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << ans;
    return 0;
}
