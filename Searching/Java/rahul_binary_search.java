import java.util.Scanner;
import java.util.*;
public class Main {
    public static void main(String args[]) {
        /* first we will create scanner for taking input  */
        Scanner sc=new Scanner(System.in);

        /* taking input for array's size */
        int size=sc.nextInt();
        /* Creating array */
        int[] arr=new int[size];
        for(int i=0;i<arr.length;i++){
        /*  inserting elements in array */
            arr[i]=sc.nextInt();
        }

  /* taking input for the value which we have to find*/
        int x=sc.nextInt();

        int ans=binarySearch(arr,x);

        if(ans == -1){
           System.out.println("Element doesn't exist");
        }
        else{
  System.out.println("Number found at index "+ans);
        }
    }

    /* creating  function for searching*/
    public static int binarySearch(int[] arr,int x){
        int lo=0 , hi=arr.length-1;
        while(lo <= hi){
            int mid=lo+(hi-lo)/2;
            
               if(arr[mid]==x){
                return mid;
            }

           else if(x > arr[mid]){
             lo=mid+1;
            }
            else if(x < arr[mid]){
           hi=mid-1;
            }
          
        }
        return -1;
    }
}