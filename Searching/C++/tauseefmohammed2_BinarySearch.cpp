//Implement Binary Search C++ (Issue #8)
//https://github.com/C0D1NG/Algorithms/issues/8
//Contributed by @tauseefmohammed2 : https://github.com/tauseefmohammed2

#include<iostream>
using namespace std;

void BinarySearch(int arr[], int n, int se){
	int first, last, middle;
	first = 0;
	last = n-1;
	middle = (first+last)/2;
	while (first <= last){
		if(arr[middle] < se)
			first = middle + 1;

		else if(arr[middle] == se){
			cout << endl << se << " is Present at Location " << middle+1;
			break;
		}

		else
			 last = middle - 1;
		middle = (first + last)/2;
	}

	if(first > last)
		cout << endl << se << " is not present in the Array";
}

int main()
{
	int n, se;
	cout << "Enter Number of Elements :";
	cin >> n;
	int arr[n];
	cout << endl<< "Enter Array Elements (In Sorted Order) :";
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	cout << endl << "Enter the Number to Search For :";
	cin >> se;
	BinarySearch(arr, n, se);
}
/*
Enter Number of Elements : 5
Enter Array Elements (In Sorted Order) : 10 20 30 40 50
Enter the Number to Search For : 20
20 is Present at Location 2

Enter Number of Elements : 5
Enter Array Elements (In Sorted Order) : 10 20 30 40 50
Enter the Number to Search For : 17
17 is not present in the Array
*/
