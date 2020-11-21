import java.util.Scanner;
import java.util.*;
public class Main {
    public static void main(String args[]) {
    Scanner sc=new Scanner(System.in);
    int size=sc.nextInt();
    int[] arr=new int[size];
    for(int i=0;i<arr.length;i++){
        arr[i]=sc.nextInt();
    }            
            int x=sc.nextInt();
   int ans=linearSearch(arr,x);
   if(ans == -1){
       System.out.println("Elements doesn't founded");
   }
   else{
       System.out.println("Elements is founded at "+ans+" index");
   }
   }

   public static int linearSearch(int[] arr, int n){
       for(int i=0;i<arr.length;i++){
           if(arr[i]==n){
               return i;
           }
       }
       return -1;
   }

}