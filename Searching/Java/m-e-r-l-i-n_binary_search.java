/*
Java code for binary search
Binary search works only for sorted arrays
Time Complexity=O(log n)
Space Complexity=O(1)
 */

import java.io.*;

class BinarySearch
{
    public static void main(String args[])throws Exception
    {
        BufferedReader bu=new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter number of elements of array:");
        int n=Integer.parseInt(bu.readLine());
        int a[]=new int[n],i;
        System.out.println("Enter the elements:");
        String s[]=bu.readLine().split(" ");
        for(i=0;i<n;i++)
        a[i]=Integer.parseInt(s[i]);
        System.out.println("Enter key:");
        int k=Integer.parseInt(bu.readLine());
        int l=0,r=n-1,mid,ans=-1;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(a[mid]==k) {ans=mid+1; break;}
            if(a[mid]>k) r=mid-1;
            else l=mid+1;
        }
        if(ans==-1) System.out.print("Element not found");
        else System.out.print("Element found at index "+ans);
    }
}

/*
eg1-
Enter number of elements of array:5
Enter the elements:
1 2 4 5 6
Enter key:
4
Element found at index 3
eg2-
Enter number of elements of array:5
Enter the elements:
1 2 4 5 6
Enter key:
3
Element not found
 */
