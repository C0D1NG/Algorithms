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

static void Inserting(int amountOfElements)
{
	int c;
	
	int *arr;
	arr = (int*)malloc(amountOfElements * sizeof(int));
	CreateArray(arr, amountOfElements);
	
	for (int i = 1; i < amountOfElements; i++)
	{
		c = arr[i];
		for (int j = i - 1; j >= 0 && arr[j] > c; j--)
		{
			arr[j + 1] = arr[j];
			arr[j] = c;
		}
	}
	
	OutputArray(arr, amountOfElements);
}

int main()
{
	int amountOfElements;
	scanf("%d", &amountOfElements);
	Inserting(amountOfElements);

	system("pause");
	return 0;
}

