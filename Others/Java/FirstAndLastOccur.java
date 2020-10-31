/******************************************************************************
Given an array of integers nums sorted in ascending order, find the starting and 
ending position of a given target value using "Modified Binary Search"
Leetcode Link- https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
*******************************************************************************/
import java.util.Scanner;
public class FirstAndLastOccur
{
    
    //finding first Occurrence
    public static int firstOccur(int n, int[] arr, int find) {
        int l=0, r=n-1;
        int start=-1;
		if(arr[0]==find) {
		    start=0;
		}else {
		    while(l<=r) {
    		    int mid=l+(r-l)/2;
    		    if(mid>0 && arr[mid]==find && arr[mid-1]!=find) {
    		        start=mid;
    		        break;
    		    } else if(arr[mid]>=find) {
                    r--;
    		    } else {
    		        l++;
    		    }
		    }   
		}  
		return start; 
    }
    
    //finding last Occurrence
    public static int lastOccur(int n, int[] arr, int find) {
        int l=0, r=n-1;
        int end=-1;
		if(arr[n-1]==find) {
		    end=n-1;
		}else {
		    while(l<=r) {
    		    int mid=l+(r-l)/2;
    		    if(mid<n-1 && arr[mid]==find && arr[mid+1]!=find) {
    		        end=mid;
    		        break;
    		    } else if(arr[mid]<=find) {
                    l++;
    		    } else {
    		        r--;
    		    }
		    }   
		}  
		return end; 
    }
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int[] arr=new int[n];
		for(int i=0; i<n; i++)
		    arr[i]=sc.nextInt();
		int find=sc.nextInt();
		int start=firstOccur(n, arr, find); //takes O(log n) time
		int end=lastOccur(n, arr, find); //takes O(log n) time
		if (start==-1 || end==-1) {
		    System.out.println("Element not found");
		} else {
		    System.out.println("First Occurrence: "+(start+1)+"  Last Occurrence: "+(end+1));
		}
	}
}

//Input: 5
//       2 2 2 3 4
//       2
//Output: First Occurrence: 1   Last Occurrence: 3

//Time Complexity: O(log n)
