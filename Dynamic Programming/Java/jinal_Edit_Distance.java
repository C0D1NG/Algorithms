import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

//Top-Down Dynamic
class Edit_Distance2 {

    static int min(int insert, int remove, int replace)
    {
        Integer[] values = { insert, remove, replace };
            return Collections.min(Arrays.asList(values));
    }
    
    static int calculateEditDistance(String str1, String str2, int i, int j, int[][] memo)
    {
        if (memo[i][j] > -1)
            return memo[i][j];
        if (i == 0)
        {
            memo[i][j] = j;
            return j;
        }
        if (j == 0)
        {
            memo[i][j] = i;
            return i;
        }
        if (str1.charAt(i - 1) == str2.charAt(j - 1))
        {
            memo[i][j] = calculateEditDistance(str1, str2, i - 1, j - 1, memo);
            return memo[i][j];
        }
        memo[i][j] = min(1 + calculateEditDistance(str1, str2, i, j - 1, memo),1 + calculateEditDistance(str1, str2, i - 1, j, memo),2 + calculateEditDistance(str1, str2, i - 1, j - 1, memo));
        return memo[i][j];      
    }

    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        String str1 = sc.nextLine();
        String str2 = sc.nextLine();
        int[][] memo = new int[str1.length() + 1][str2.length() + 1];
        for (int[] row : memo)
            Arrays.fill(row, -1);
        int minDistance = calculateEditDistance(str1, str2, str1.length(), str2.length(),memo);
        System.out.println(minDistance-1);
        sc.close();
    }
}



