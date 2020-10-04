#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <Math.h>
#include <malloc.h>
#include <time.h>

static void CreateArray(int arr[], int amountOfElements)
{
	srand(time(NULL));

	for (int i = 0; i < amountOfElements; i++)
	{
		arr[i] = rand() % 1000 - 500;
	}
}

static void OutputArray(int arr[], int amountOfElements)
{
	for (int i = 0; i < amountOfElements; i++)
	{
		printf("%d\n", arr[i]);
	}

	printf("\n");
}

void Swap(int* a, int* b)
{
	*a += *b;
	*b = *a - *b;
	*a -= *b;
}

static void Selection(int amountOfElements)
{
	int *arr;
	arr = (int*)malloc(amountOfElements * sizeof(int));
	CreateArray(arr, amountOfElements);
	
	for (int i = 0; i < amountOfElements; i++)
	{
		int min = i;
		for (int j = i + 1; j < amountOfElements; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			Swap(&arr[i], &arr[min]);
		}
	}	
	
	OutputArray(arr, amountOfElements);
}

int main()
{
	int amountOfElements;
	scanf("%d", &amountOfElements);
	Selection(amountOfElements);

	system("pause");
	return 0;
}

