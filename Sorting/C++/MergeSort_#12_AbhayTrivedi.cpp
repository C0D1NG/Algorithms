//Submitted by AbhayTrivedi
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastIO {ios_base::sync_with_stdio(false); cin.tie(NULL);}

void merge(int*, int, int, int);
void mergeSort(int*, int, int);

int main(){
	//fastIO
	int n;
	cout << "Enter Size: ";
	cin >> n;
	int a[n];
	cout << "Enter Elements of array: ";
	
	for(int i=0; i<n; i++)
		cin >> a[i];
	
	mergeSort(a, 0, n);
	
	cout << "Sorted Array: "; 
	for(int i=0; i<n; i++)
		cout << a[i] << " ";
	cout << endl;
	

	return 0;
}

void merge(int arr[], int l, int mid, int r){ 
	int i, j, k = l;
	int n1 = mid - l + 1;
	int n2 = r - mid;

	int L[n1], R[n2];

    for(i=0; i<n1; i++)
        L[i] = arr[l + i];
	for(j=0; j<n2; j++)
        R[j] = arr[mid + 1 + j];
	
	i = 0; j = 0;
    while(i < n1 && j < n2) {
        if(L[i] <= R[j]){
            arr[k] = L[i]; 
            i++; 
        } 
        else{ 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    }

    while(i < n1) { 
        arr[k] = L[i]; 
        i++; k++; 
    }
    while(j < n2){
        arr[k] = R[j];
        j++; k++; 
    } 
}

void mergeSort(int arr[], int l, int r){
    if(l < r){
        int mid = l + (r - l) / 2; 

        mergeSort(arr, l, mid); 
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}
