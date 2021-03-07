#!/bin/env python

def solver(VALUES, WEIGHTS, W, N):
    dp = {}
    def knapsack(w, n):
        if (w, n) in dp:
            return dp[w, n]
        if n < 0:
            return 0
        elif w < 0:
            return 0
        elif weights[n] <= w:
            v1 = knapsack(w - weights[n], n - 1) + values[n]
        else:
            v1 = 0
        v2 = knapsack(w, n - 1)
        ans = max(v1, v2)
        dp[(w, n)] = ans
        return ans

    return knapsack(W, N - 1)

if __name__ == '__main__':
    values  = [11, 66, 22, 77, 33, 88, 44, 99, 55, 42]
    weights = [9, 3, 8, 2, 7, 1, 6, 10, 5, 4]
    w = 17
    n = len(values)
    ans = solver(values, weights, w, n)
    print(ans)
