#include <stdio.h>

void insertionSort(int [], int);
void displayArray(int [], int);

int main()
{
    int arr[] = {9, 8, 3, 4, 2, 6, 7, 1, 5, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
  
    insertionSort(arr, n);
    displayArray(arr, n);

    return 0;
}

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void displayArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

/*
Input: Hardcoded set of values from 0 to 9
Output: 0 1 2 3 4 5 6 7 8 9
Time Complexity: O(n^2)
Space Complexity: O(1)
*/
