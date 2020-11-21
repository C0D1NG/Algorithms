#include <stdio.h>

void mergearray(int a[50], int i1, int j1, int i2, int j2)
{
    int temp[50];
    int i, j, k;
    i = i1;
    j = i2;
    k = 0;

    while (i <= j1 && j <= j2)
    {
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }
    while (i <= j1)
    {
        temp[k++] = a[i++];
    }
    while (j <= j2)
    {
        temp[k++] = a[j++];
    }
    for (i = i1, j = 0; i <= j2; i++, j++)
    {
        a[i] = temp[j];
    }
}

void mergesort(int a[50], int i, int j)
{
    int mid;

    if (i < j)
    {
        mid = (i + j) / 2;
        mergesort(a, i, mid);
        mergesort(a, mid + 1, j);
        mergearray(a, i, mid, mid + 1, j);
    }
}

void main()
{
    int a[50], i, n;
    printf("\nEnter the number of elements for array ");
    scanf("%d", &n);
    printf("\nEnter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    mergesort(a, 0, n - 1);
    printf("The Sorted array is :\n");
    for (i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}
