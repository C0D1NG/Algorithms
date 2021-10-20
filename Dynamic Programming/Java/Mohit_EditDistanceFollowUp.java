// Min Ditance FollowUP : each operation have individual cost

class Mohit_EditDistanceFollowUp{

     public int editDistFollowMem(String s1, String s2, int[] cost, int n, int m, int[][] dp) {

        if (n == 0 && m == 0)
            return dp[n][m] = 0; // no operations needed
        if (n == 0)
            return dp[n][m] = m * cost[0]; // m insert operations
        if (m == 0)
            return dp[n][m] = n * cost[2]; // n delete operations

        if (dp[n][m] != -1)
            return dp[n][m];

        int replace = editDistFollowMem(s1, s2, cost, n - 1, m - 1, dp) + cost[1];
        int insert = editDistFollowMem(s1, s2, cost, n, m - 1, dp) + cost[0];
        int delete = editDistFollowMem(s1, s2, cost, n - 1, m, dp) + cost[2];

        char a = s1.charAt(n - 1);
        char b = s2.charAt(m - 1);
        int ans = 0;
        if (a == b) {
            // move forward no operation is done-> similar to replace without cost
            ans = editDistFollowMem(s1, s2, cost, n - 1, m - 1, dp);
        } else {
            // we have performed some operation => + cost
            ans = Math.min(replace, Math.min(insert, delete));
        }

        return dp[n][m] = ans;
    }

    public static void main(String[] args) {
         String s1 = "saturday", s2 = "sunday";
        int n = s1.length(), m = s2.length();
        int[][] dp = new int[n + 1][m + 1];
        for (int[] d : dp)
            Arrays.fill(d, -1);
        int ans = editDistFollowMem(s1, s2, n, m, dp, insert, delete, replace);
        System.out.println(ans);
    }
}
   
