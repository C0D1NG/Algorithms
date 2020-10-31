class FractionalKnapsack {
        public static void main(String args[]) {
            int[] w = {5, 10, 15, 22,25};
            int[] val = {30,40,45,77,90};
            int capacity = 60;
            rat(w,val,capacity);
        }
    
        static void rat(int[] w, int[] v, int cap) {
            double[] r = new double[w.length];
            double[] s= new double[w.length];
            for(int i=0;i<r.length;i++) {
                r[i] = (double)v[i]/w[i];
                s[i] = (double)v[i]/w[i];
            }
            sort(r);    
            int wt=0;
            int j=0,k=0; 
            int p=0;
            while(wt<=cap) {
                j=el(r[k++],s);
                if(wt+w[j]<=cap) {
                    wt = wt + w[j];
                    p = p+v[j];
                }
                else
                    break;
            }
            cap= cap-wt;
            double c = v[j]*((double)cap/w[j]);
            p = p + (int)c;
            System.out.println(p);
        }
    
        static void sort(double[] a) {
            double temp=0;
            for(int i=0;i<a.length-1;i++) {
                for(int j=0;j<a.length-i-1;j++) {
                    if(a[j+1]>=a[j]) {
                        temp=a[j+1];
                        a[j+1]=a[j];
                        a[j]=temp;
                    }
                }
            }
        }
    
        static int el(double a,double[] b) {
            int i=0;
            for( i=0;i<b.length;i++) {
                if(a==b[i]) 
                    break;
            }
            return i;
        }
}