#include <bits/stdc++.h>
using namespace std;



int main() {
	
	//implementing a linear search algorithm//

	//initializing an array of size 10
	int a[10] = {3, 1, 4, 1, 5, 9, 2, 1, 7, 0};

	//assume we need to find if there's a "2" in the array, if yes, print "Found a 2" else print "No 2 in the array"
	//initializing a flag
	int f = 0;
	for (int i = 0; i < 10; ++i)
	{
		if (a[i] == 2) {
			f = 1; //setting flag as true
			break;
		}
	}

	//if flag is true, then we found our desired element "2", else there's no 2 in the array
	if (f)
		cout << "Found a 2 in the array\n";
	else
		cout << "No 2 in the array\n";

	//hope you got the idea of a linear search, this can be generalised further for finding any element in a linear data structure.
	return 0;
}
