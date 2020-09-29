//contributed by meghnabajoria
//JAVA code for linear search for C0D1NG Algorithms
import java.io.*;
import java.util.*;

public class LinearSearch
{
	public static int linearsearch(int[] arr,int x)
	{
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]==x)
				return i;
		}
		return -1;
	}
	public static void main(String ars[])
	{
		int arr[]={10,20,30,40,60};
		int x=20;
		int index=linearsearch(arr,x);
		if(index==-1)
			System.out.println("The element "+x+" is not present!");
		else
			System.out.println("Element "+x+" is present at "+index);

	}
}
