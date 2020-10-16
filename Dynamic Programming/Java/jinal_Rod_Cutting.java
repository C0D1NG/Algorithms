import java.util.*;

//Top-Down Dynamic
class Rod_Cutting3 {

    static int Cut_Rod(int[] p,int n)
    {
        int[] r = new int[n+1];
        for(int i=0;i<r.length;i++)
            r[i] = Integer.MIN_VALUE;
        return Memoized_Cut_Rod(p,n,r);
    }

    static int Memoized_Cut_Rod(int[] p,int n,int[] r)
    {
        int q;
        if(r[n] >= 0)
            return r[n];
        if(n==0)
            q=0;
        else
        {
            q = Integer.MIN_VALUE;
            for(int i=0;i<n;i++)
            {
                q = max(q,p[i] + Memoized_Cut_Rod(p, n-i-1, r));
            }
        }
        r[n] = q;
        return r[n];
    }    

    static int max(int a,int b)
    {
        if(a<b)
            return b;
        else    
            return a;    
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the length of the rod.");
        int n = sc.nextInt();
        int[] p = {1,5,8,9,10,17,17,20,24,30};
        int r = Cut_Rod(p, n);
        System.out.println(r);
        sc.close();
    }
}
