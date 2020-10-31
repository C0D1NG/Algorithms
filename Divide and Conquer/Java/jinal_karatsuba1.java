import java.util.*;

class karatsuba1 {
    static String mul(String A, String B)
    {
		int n = 0;
    	int n1 = A.length();
    	int n2 = B.length();
    	if(n1<n2)
		{
			for(int i=0;i<n2-n1;i++)
			{
				A = '0'+ A;
			}
			n = n2;
		}
    	else
    	{
			for(int i=0;i<n1-n2;i++)
			{
				B = '0'+ B;
			}
			n = n1;
		}
    	if(n==1)
    		return Integer.toString((A.charAt(0)-'0')*(B.charAt(0)-'0'));
    	
    	else
    		{
    		String al,ar,bl,br;
    		String x1;
			String x2;
			String x3;
			int l = n/2;
			int r = n-n/2;
    	        	    
    	    al = A.substring(0, l);
    	    ar = A.substring(l, n);
    	    bl = B.substring(0, l);
    	    br = B.substring(l, n);
    	    
    	    x1 = mul(al,bl);
    	    x2 = mul(add(al,ar),add(bl,br));
    	    x3 = mul(ar,br);
    	    
    	    x2 = subtract(x2,add(x1,x3));
    	    String s1 = "";
    	    for(int i=0;i<2*r;i++)
    	    	x1 += '0';
    	    for(int i=0;i<r;i++)
    	    	x2 += '0';
    	    s1 = add(x1,x3);
    	    s1 = add(s1,x2);
    	    return s1;
		}
    }

    static String add(String x, String y)
    {
    	int n = 0;
    	int n1 = x.length();
    	int n2 = y.length();
    	if(n1<n2)
		{
			for(int i=0;i<n2-n1;i++)
			{
				x = '0'+ x;
			}
			n = n2;
		}
    	else
    	{
			for(int i=0;i<n1-n2;i++)
			{
				y = '0'+ y;
			}
			n = n1;
		}
    	String s = "";
    	int sum = 0,c = 0;
    	for(int i=n-1;i>=0;i--)
    	{
    		sum = (x.charAt(i)-'0')+(y.charAt(i)-'0')+c;
    		c = sum/10;
    		sum = sum%10;
    		s += (char)(sum+'0');
    	}
    	if(c>0)
    		s += (char)(c+'0');
    	s = new StringBuilder(s).reverse().toString();
        return s;
    }

	static String subtract(String a, String b)
	{
		int n = 0;
    	int n1 = a.length();
    	int n2 = b.length();
    	if(n1<n2)
		{
			for(int i=0;i<n2-n1;i++)
			{
				a = '0'+ a;
			}
			n = n2;
		}
    	else
    	{
			for(int i=0;i<n1-n2;i++)
			{
				b = '0'+ b;
			}
			n = n1;
		}
    	String s = "";
		int sub = 0, c = 0;
		for(int i=n-1;i>=0;i--)
		{
			sub = ((a.charAt(i)-'0')-(b.charAt(i)-'0')-c);
			if(sub<0)
			{
				sub += 10;
				c = 1;
			}
			else
				c = 0;
			
			s += (char)(sub + '0');
		}
		s = new StringBuilder(s).reverse().toString();
		
    	return s;
    }
    
    public static void main(String[] args) {
		Random r = new Random();
		String a = "";
		String b = "";
		int[] lengths = {10,50,100,200,500,1000};
		for(int i=0;i<lengths.length;i++)
		{
			for(int j=0;j<lengths[i];j++)
			{
				a = a + String.valueOf(r.nextInt(10));
				b = b + String.valueOf(r.nextInt(10));
			}
		}
		long st,et,t;
		st = System.nanoTime();
		String s = mul(a,b);
		System.out.println(s);
		et = System.nanoTime();
		t = et - st;
		System.out.println(t);
	   }
}   