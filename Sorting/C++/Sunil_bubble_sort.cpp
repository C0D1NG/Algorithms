/*
    Program :- Bubble Sort
    Time Complexity :- O(n^2) where n is the number of elements
    Written by :- Sunil Kumar Panda
    Github user name :- Sunil200228
    Github Link :- https://github.com/Sunil200228 
*/
#include <iostream>
using namespace std;

//Swap function
void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

// A function to implement bubble sort
void bubblesort(int elements[], int no_elements)
{
    for (int i = 0; i < no_elements - 1; i++)
        // Last i elements are already in place
        for (int j = 0; j < no_elements - i - 1; j++)
            if (elements[j] > elements[j + 1])
                swap(&elements[j], &elements[j + 1]);
}

// Driver code
int main()
{
    //Number of elements of the array
    int no_elements;
    cout << "Number of elements: ";
    cin >> no_elements;

    //Array of integer type of elements
    int elements[no_elements];
    cout << "Enter the elements: ";

    //Input of elements
    for (int i = 0; i < no_elements; i++)
        cin >> elements[i];

    //Bubble Sort
    bubblesort(elements, no_elements);
    
    //Sorted array
    cout << "\nSorted array: \n";
    for (int i = 0; i < no_elements; i++)
        cout << elements[i] << " ";
    cout << endl;
    return 0;
}
