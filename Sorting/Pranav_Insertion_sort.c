#include <stdio.h>

void insertion(int a[100], int n)
{
    int i, k, temp, j;
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        k = i - 1;
        while (temp < a[k] && k >= 0)
        {
            a[k + 1] = a[k];
            k--;
        }
        a[k + 1] = temp;
    }
    printf("\nInsertion sorted array : \n");
    for (i = 0; i < n; i++)
        printf("%4d", a[i]);
}

void main()
{
    int choice, a[100], i, n;
    printf("\nEnter the Number of terms to be put in array\n");
    scanf("%d", &n);
    printf("Enter %d values one by one\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Insertion Sort\n");
    insertion(a, n);
}
