// CPP program to find the largest subset which
// where each pair is divisible.
#include <bits/stdc++.h>
using namespace std;

// function to find the longest Subsequence
int largestSubset(int a[], int n)
{
	// dp[i] is going to store size of largest
	// divisible subset beginning with a[i].
	int dp[n];

	// Since last element is largest, d[n-1] is 1
	dp[n - 1] = 1;

	// Fill values for smaller elements.
	for (int i = n - 2; i >= 0; i--) {

		// Find all multiples of a[i] and consider
		// the multiple that has largest subset
		// beginning with it.
		int mxm = 0;
		for (int j = i + 1; j < n; j++)
			if (a[j] % a[i] == 0 || a[i] % a[j] == 0)
				mxm = max(mxm, dp[j]);

		dp[i] = 1 + mxm;
	}

	// Return maximum value from dp[]
	return *max_element(dp, dp + n);
}

// driver code to check the above function
int main()
{
	int a[] = { 1, 3, 6, 13, 17, 18 };
	int n = sizeof(a) / sizeof(a[0]);
	cout << largestSubset(a, n) << endl;
	return 0;
}

