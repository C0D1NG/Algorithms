#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int searchValue;
    cout << "Enter search value: ";
    cin >> searchValue;
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
        cout << "Not found";
    else
        cout << "Found at index " << index;
}