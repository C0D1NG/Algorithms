/* Author- vibhor376 
   Created- 2nd October 2020 */
   
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
 // x is the number entered bt he user
 for(int i=0;i<n;i++){
     cin>>a[i];
 }
 // array in which we have to do binary_search
 ll int l=0,r=n-1,mid;
 bool f=false;
 //Binary Search 
 while(l<=r){
     mid=(l+r)/2;
     if(a[mid]==x){
         f=true;
         break;
     }else{
         if(a[mid]>x){
             r=mid-1;
         }else{
             l=mid+1;
         }
     }
 }
 if(f){
     cout<<"Yes number is present in the array."<<endl;
 }else{
     cout<<"No number is not present in the array."<<endl;
 }
}
