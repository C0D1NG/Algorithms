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

static void Bubble(int amountOfElements)
{
	int *arr;
	arr = (int*)malloc(amountOfElements * sizeof(int));
	CreateArray(arr, amountOfElements);
	
	bool flag;
	do
	{
		flag = false;
		for (int i = 1; i < amountOfElements; i++)
			if (arr[i] < arr[i - 1])
			{
				Swap(&arr[i], &arr[i - 1]);
				flag = true;
			}
	} while (flag);

	OutputArray(arr, amountOfElements);
}

int main()
{
	int amountOfElements;
	scanf("%d", &amountOfElements);
	Bubble(amountOfElements);

	system("pause");
	return 0;
}

