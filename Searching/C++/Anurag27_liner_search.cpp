#include <bits/stdc++.h>
#include <set>
#include <cstdlib>
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
#include<algorithm>
#include <typeinfo>
// cout << typeid(mm).name() << endl;
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x)			cout<<#x<<" "<<x<<"\n";




int32_t main() {
	FIO;
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif


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


