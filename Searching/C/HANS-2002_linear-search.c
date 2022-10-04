#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int searchValue;
    printf("Enter search value: ");
    scanf("%d", &searchValue);
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == searchValue)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
        printf("Not found\n");
    else
        printf("Found at index %d\n", index);
}