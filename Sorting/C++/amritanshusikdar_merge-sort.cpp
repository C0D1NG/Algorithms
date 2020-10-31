#include <iostream>

using namespace std;

void merge(int a[], int left, int middle, int right)
{
	int n1 = middle - left + 1;
	int n2 = right - middle;
	int L[n1], R[n2];

	for (int i = 0; i < n1; i++)
		L[i] = a[left + i];
	for (int j = 0; j < n2; j++)
		R[j] = a[middle + 1 + j];

	int i = 0, j = 0;
	int k = left;

	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			a[k] = L[i];
			i++;
		}
		else
		{
			a[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1)
	{
		a[k] = L[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		a[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int a[], int left, int right)
{
	if (left < right)
	{
		int middle = left + (right - left) / 2;
		mergeSort(a, left, middle);
		mergeSort(a, middle + 1, right);

		merge(a, left, middle, right);
	}
}


int main()
{
	int n;
	cout << "Enter size of array: ";
	cin >> n;

	cout << "Enter the elements of array: \n";
    int a[n];
    for (int i = 0; i < n; i++)
		cin >> a[i];

	mergeSort(a, 0, n - 1);

	cout << "\nSorted array is: \n";

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";

	return 0;
}
