 //Algorithm

#include <iostream> 
using namespace std; 
  
// A function to implement bubble sort  
void bubbleSort(int arr[], int n)  
{  
    int i, j, temp;  
    for (i = 0; i < n-1; i++)       
    	for (j = 0; j < n-i-1; j++)  
        	if (arr[j] > arr[j+1])  
            	{
            		temp=arr[j];
            		arr[j]=arr[j+1];
            		arr[j+1]=temp;
			}
}  
  
//Function to print an array 
void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout <<"\n";  
}  
  
   
int main()  
{  
   int arr[] = {10,80,34,5,89,22,19,7}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    	
    bubbleSort(arr, n);  
    
	cout<<"Sorted array: \n";  
    printArray(arr, n);  
    return 0;  
} 