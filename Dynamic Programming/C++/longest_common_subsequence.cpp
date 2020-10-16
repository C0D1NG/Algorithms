// Author: Chidu2000
// dynamic programming
// longest common subsequence considering two strings
// implemenation using c++ using recursion

#include<bits/stdc++.h> 
using namespace std; 

int LongestCommonSubsequence( string X, string Y, int m, int n )  
{  
    if (m == 0 || n == 0)  
        return 0;  
    if (X[m-1] == Y[n-1])  
        return 1 + LongestCommonSubsequence(X, Y, m-1, n-1);  
    else
        return max(LongestCommonSubsequence(X, Y, m, n-1), LongestCommonSubsequence(X, Y, m-1, n));  
}  

int main() { 
  string s1="abcdef";
  string s2="xyczef"; 
  int a=s1.length(); 
  int b=s2.length();
  cout<<"Longest common subsequence is:"<<" ";
  cout<<LongestCommonSubsequence(s1,s2,a,b);
  return 0;
}  



