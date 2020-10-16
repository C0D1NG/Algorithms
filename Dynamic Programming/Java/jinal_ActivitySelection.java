
class ActivitySelection {

    public static void MaxActivity(int[] s, int[] f) {
            int n = s.length;
            int k = 0;
            System.out.println((k+1) + " ");
            for(int m = 1; m < n ; m++)
            {
                if(s[m]>=f[k])
                {
                    System.out.println((m+1) + " ");
                    k = m;
                }
        }     
    } 
    
    public static void main(String[] args) {
            int[] s = {1,3,0,5,3,5,6,8,8,2,12};
            int[] f = {4,5,6,7,9,9,10,11,12,14,16};
            System.out.println("The largest subset of mutually compatible activities is : ");
            MaxActivity(s,f);
    }
}