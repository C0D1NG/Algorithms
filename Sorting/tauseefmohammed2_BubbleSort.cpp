//Implement Bubble Sort C++ (Issue #2)
//https://github.com/C0D1NG/Algorithms/issues/2
//Contributed by @tauseefmohammed2 : https://github.com/tauseefmohammed2

#include<iostream>
using namespace std;

//Function to Implement Bubble Sort
void BubbleSort(int arr[], int n){
	int i, j;
	for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << endl<< "Array After Sorting: ";
    for(i = 0; i < n; i++)
      cout << arr[i] << " ";
}

int main(){
    int n;
    cout << "Enter Number of Elements: ";
    cin >> n;
    int arr[n], i;
    cout << endl<< "Enter Array Elements: ";

    //Taking Array Elements as Input
    for(i = 0; i < n; i++)
        cin>>arr[i];

    //Calling Bubble Sort Function
    BubbleSort(arr, n);
}