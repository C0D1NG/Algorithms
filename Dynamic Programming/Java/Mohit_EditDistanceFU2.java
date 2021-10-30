class Mohit_EditDistanceFU2{
	 // each character has it's own own for each specific operation

	 public static void main(String[] args) {
        int[] insert = new int[] { 43, 96, 30, 37, 13, 19, 74, 68, 89, 10, 76, 31, 83, 45, 85, 99, 79, 20, 5, 3, 5, 1,
                6, 6, 6, 7 };
        int[] delete = new int[] { 3, 4, 30, 5, 13, 6, 74, 46, 7, 10, 6, 31, 3, 8, 85, 99, 79, 20, 5, 9, 5, 10, 6, 11,
                24, 7 };
        int[] replace = new int[] { 9, 8, 30, 5, 13, 5, 8, 68, 5, 8, 2, 31, 83, 5, 8, 5, 99, 79, 5, 5, 3, 5, 8, 25, 25,
                6, 7 };
        String s1 = "saturday", s2 = "sunday";
        int n = s1.length(), m = s2.length();
        int[][] dp = new int[n + 1][m + 1];
        for (int[] d : dp)
            Arrays.fill(d, -1);
        int ans = editDistance02(s1, s2, n, m, dp, insert, delete, replace);
        System.out.println(ans);
    }

        static int editDistance02(String s1, String s2, int n, int m, int[][] dp, int[] insertCost, int[] deleteCost,
            int[] replaceCost) {

        if (n == 0 && m == 0)
            return dp[n][m] = 0; // no operations
        if (n == 0) { // we need to add those left characters of s2
            int sum = 0, itr = m;
            // making m=>0
            while (itr-- > 0) {
                char c = s2.charAt(itr);
                sum += insertCost[c - 'a'];
            }
            return dp[n][m] = sum;
        }
        if (m == 0) { // we need to delete those extra characters from s1
            int sum = 0, itr = n;
            // making n=>0
            while (itr-- > 0) {
                char c = s1.charAt(itr);
                sum += deleteCost[c - 'a'];
            }
            return dp[n][m] = sum;
        }

        char a = s1.charAt(n - 1), b = s2.charAt(m - 1);

        int insert = editDistance02(s1, s2, n, m - 1, dp, insertCost, deleteCost, replaceCost);
        insert += +insertCost[b - 'a']; // must have inserted corresponding char of s2 into a s1

        int delete = editDistance02(s1, s2, n - 1, m, dp, insertCost, deleteCost, replaceCost);
        delete += deleteCost[a - 'a']; // must have deleted corresponding char of s1

        int replace = editDistance02(s1, s2, n - 1, m - 1, dp, insertCost, deleteCost, replaceCost);
        replace += replaceCost[a - 'a']; // replaced ch1 from s1

        int ans = 0;

        if (a == b) {
            // no cost
            ans = editDistance02(s1, s2, n - 1, m - 1, dp, insertCost, deleteCost, replaceCost);
        } else {
            // some operation is needed
            ans = Math.min(Math.min(insert, delete), replace);
        }
        return dp[n][m] = ans;
    }


}