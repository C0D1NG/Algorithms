#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int n = s.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
            return false;
    }
    return true;
}
int minPalPartitionRec(string s, int i, int j)
{
    if (i >= j || isPalindrome(s.substr(i, j - i + 1)))
        return 0;
    int n = s.length();
    int ans = n;
    for (int k = i; k < j; k++)
    {
        int temp = minPalPartitionRec(s, i, k) + minPalPartitionRec(s, k + 1, j) + 1;
        ans = min(temp, ans);
    }
    return ans;
}

// O(n^3) solution
int minPalPartition(string str)
{
    int n = str.length();
    bool P[n][n];
    int C[n][n];
    for (int i = 0; i < n; i++)
    {
        P[i][i] = true;
        C[i][i] = 0;
    }
    for (int L = 2; L <= n; L++)
    {
        for (int i = 0; i < n - L + 1; i++)
        {
            int j = i + L - 1;
            if (L == 2)
                P[i][j] = str[i] == str[j];
            else
                P[i][j] = str[i] == str[j] && P[i + 1][j - 1];
            if (P[i][j])
                C[i][j] = 0;
            else
            {
                C[i][j] = INT_MAX;
                for (int k = i; k < j; k++)
                {
                    C[i][j] = min(C[i][j], C[i][k] + C[k + 1][j] + 1);
                }
            }
        }
    }
    return C[0][n - 1];
}

// O(n^2) solution
int minPart(string s)
{
    int n = s.length();
    bool P[n][n];
    int C[n];
    for (int i = 0; i < n; i++)
    {
        P[i][i] = true;
    }
    for (int L = 2; L <= n; L++)
    {
        for (int i = 0; i < n - L + 1; i++)
        {
            int j = i + L - 1;
            if (L == 2)
                P[i][j] = s[i] == s[j];
            else
                P[i][j] = s[i] == s[j] && P[i + 1][j - 1];
        }
    }
    for (int i = 0; i < n; i++)
    {
        C[i] = INT_MAX;
        if (P[0][i])
        {
            C[i] = 0;
        }
        else
        {
            for (int j = 0; j < i; j++)
            {
                if (P[j + 1][i])
                {
                    C[i] = min(C[i], 1 + C[j]);
                }
            }
        }
    }
    return C[n - 1];
}

int main()
{
    string s = "ababbbabbababa";
    cout << "Min cuts needed for Palindrome Partitioning is " << minPalPartitionRec(s, 0, s.length() - 1) << endl;
    cout << "Min cuts needed for Palindrome Partitioning is " << minPalPartition(s) << endl;
    cout << "Min cuts needed for Palindrome Partitioning is " << minPart(s) << endl;
    return 0;
}