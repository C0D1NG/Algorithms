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

static double Shell(int amountOfElements)
{
	int *arr;
	arr = (int*)malloc(amountOfElements * sizeof(int));
	CreateArray(arr, amountOfElements);
	
	int temp, step = amountOfElements / 2;
	while (step > 0)
	{
		for (int i = 0; i < (amountOfElements - step); i++)
		{
			int j = i;
			while (j >= 0 && arr[j] > arr[j + step])
			{
				temp = arr[j];
				arr[j] = arr[j + step];
				arr[j + step] = temp;
				j--;
			}
		}
		step = step / 2;
	}
	
	OutputArray(arr, amountOfElements);
}

int main()
{
	int amountOfElements;
	scanf("%d", &amountOfElements);
	Shell(amountOfElements);

	system("pause");
	return 0;
}

