import java.util.*;
class GCD{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        System.out.println("Input 2 integers a and b :");
        long a,b;
        a=s.nextLong();
        b=s.nextLong();
        System.out.println("GCD of "+a+" and "+b+" : "+gcd(a,b));
    }
    public static long gcd(long a, long b){
        if(b==0)
            return a;
        return gcd(b,a%b);
    }
}