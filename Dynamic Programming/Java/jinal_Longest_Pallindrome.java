import java.util.*;

//Top- Down Dynamic 
class Longest_Pallindrome2 {
    
    public static String longestPallindrome(String X, String Y, int m, int n,int[][]T)
    {
        if (m == 0 || n == 0)
            return "";
        if (X.charAt(m - 1) == Y.charAt(n - 1))
            return longestPallindrome(X, Y, m - 1, n - 1, T) + X.charAt(m - 1);
        if (T[m - 1][n] > T[m][n - 1])
            return longestPallindrome(X, Y, m - 1, n, T);
        return longestPallindrome(X, Y, m, n - 1, T);
    }

    public static int LCSLength(String X, String Y, int n, int[][] T)
    {
        for (int i = 1; i<= n; i++)
        {
            for (int j = 1; j<= n; j++)
            {
                if (X.charAt(i - 1) == Y.charAt(j - 1))
                    T[i][j] = T[i - 1][j - 1] + 1;
                else
                    T[i][j] = Integer.max(T[i - 1][j], T[i][j - 1]);
            }
        }
        return T[n][n];
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String X = sc.nextLine();
        String Y = new StringBuilder(X).reverse().toString();
        int[][] T = new int[X.length() + 1][X.length() + 1];
        System.out.println("The length of the LPS is :" + LCSLength(X,Y,X.length(),T));
        System.out.println("The LPS is :" + longestPallindrome(X, Y, X.length(), X.length(), T));
        sc.close();
    }
}        
