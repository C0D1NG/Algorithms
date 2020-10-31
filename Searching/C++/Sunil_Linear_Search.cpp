/*
    Program :- Linear Search
    Time Complexity :- O(n) where n is the number of elements
    Written by :- Sunil Kumar Panda
    Github user name :- Sunil200228
    Github Link :- https://github.com/Sunil200228 
*/

#include <iostream>
using namespace std;

int linear_search(int elements[], int no_elements, int search_ele)
{
    //Search the element using iterator
    for (int i = 0; i < no_elements; i++)
        if (elements[i] == search_ele)
            //Element found return index value
            return i + 1;
    //Element not found return -1;
    return -1;
}
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

    //Elements to be search
    int search_ele;
    cout << "Enter the element to search: ";
    cin >> search_ele;

    //search for that element if found then return the index or return -1;
    int index = linear_search(elements, no_elements, search_ele);
    cout << "\nElement found at: " << index << endl;
    return 0;
}