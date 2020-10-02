//Submitted by AbhayTrivedi
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastIO {ios_base::sync_with_stdio(false); cin.tie(NULL);}

int search(int arr[], int n, int x){
	for(int i=0; i<n; i++) 
		if (arr[i] == x) 
			return i;
	cout << "Element is not present in array!" << endl;
	return -1;
} 

int main(){
  //fastIO
	int n, x;
	cout << "Enter size of array: ";
	cin >> n;
	int arr[n];
	cout << "Enter elements of array: ";
	for(int i=0; i<n; i++)
		cin >> arr[i];
		
	cout << "Enter the Element to be founded: ";
	cin >> x; 
	int result = search(arr, n, x);
	
	if(result != -1)
		cout << "Element is present at index: " << result << endl;
		
	return 0; 
} 
