// @author meghnabajoria

/*Given terms t(i) and t(i+1) where 1<i<infinity , term t(i+2)  is computed using the relation: t(i+2)=t(i)+t(i+1)^2*/

//using Dynamic Programming


package java.util;
package java.math;
    
public class Modifiedfibbonacci
{
    static String fibonacciModified(int t1, int t2, int n) 
    {
        BigInteger[] dp=new BigInteger[n+1]; //  The value of t(n) may far exceed the range of a 64-bit integer hence we need BigInteger
        for(int i=0;i<=n;i++)
        {
            if(i==0)
                dp[0]=BigInteger.valueOf(t1);
            else if(i==1)
                dp[1]=BigInteger.valueOf(t2);
            else
            {
                BigInteger mul=dp[i-1];
              
                BigInteger mult=mul.multiply(mul);
              
                BigInteger add=dp[i-2];
        
                dp[i]=add.add(mult);
    
            }
              
        }
        String str=dp[n-1].toString();
        return str;
    }

    public static void main(String args[])
    {
        int t1=0;
        int t2=1;
        int n=5;
        String result = fibonacciModified(t1, t2, n);
        System.out.println(result);
    }
}
    