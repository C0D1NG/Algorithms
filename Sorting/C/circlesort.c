#include <stdio.h>
#include <stdlib.h>

int circle_inner_sort(int *start, int *end)
{
    int *p, *q, t, swapped;

    if (start == end)
        return 0;
    for (swapped = 0, p = start, q = end; p < q || (p == q && ++q); p++, q--)
        if (*p > *q)
            t = *p, *p = *q, *q = t, swapped = 1;

    return swapped | circle_inner_sort(start, q) | circle_inner_sort(p, end);
}

void circle_sort(int a[], int n)
{
    while (circle_inner_sort(a, a + (n - 1)))
    {
        ;
    }
}

int main(void)
{
    int size, i, j;
    printf("Enter Size of the Array  \n");
    scanf("%d", &size);
    int A[size];
    for (i = 0; i < size; i++)
        scanf("%d", &A[i]);

    circle_sort(A, size);
    printf("Sorted Array is  \n");
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");

    return 0;
}