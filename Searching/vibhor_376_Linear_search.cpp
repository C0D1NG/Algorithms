/* Author - vibhor376 
   Created - 2nd October 2020 */
   
#include<bits/stdc++.h>
#define fastAF ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define ull unsigned ll
#define ld long double
#define pb emplace_back
#define pf push_front
#define dll deque<ll>
#define vll vector<ll>
#define pll pair<ll,ll>
#define mapll map<ll,ll>
#define endl "\n"
#define all(v) v.begin(),v.end()
#define deb(x) cout<<x
#define mod (int) 1e9+7
#define pi 3.1415926536
#define deci(x) setprecision(x)
#define  rev greater<int>()
using namespace std; 
int main()
{
 ll int n,x;
 cin>>n>>x;
 ll int a[n];
 // x is the number entered by the user
 // array in which we have to do linear_search
  bool f=false;
 for(int i=0;i<n;i++){
     cin>>a[i];
     if(a[i]==x){
         f=true;
     }
 }
 if(f){
     cout<<"Yes number is present in the array."<<endl;
 }else{
     cout<<"No number is not present in the array."<<endl;
 }
}
