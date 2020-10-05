// Java program to find nth Ugly Number 

import java.util.*;
import java.lang.Math; 

class UglyNumber 
{ 
	static int getNthUglyNum(int n) 
	{ 
		int ugly[] = new int[n]; // store ugly numbers 
		int i_2 = 0, i_3 = 0, i_5 = 0; 
		int next_multiple_of_2 = 2; 
		int next_multiple_of_3 = 3; 
		int next_multiple_of_5 = 5; 
		int next_ugly_no = 1; // 1 is included by convention
		
		ugly[0] = 1; 
		
		for(int i = 1; i < n; i++) 
		{ 
			next_ugly_no = Math.min(next_multiple_of_2, Math.min(next_multiple_of_3, next_multiple_of_5)); 
			
			ugly[i] = next_ugly_no; 
			if (next_ugly_no == next_multiple_of_2) 
			{ 
			i_2 = i_2+1; 
			next_multiple_of_2 = ugly[i_2]*2; 
			} 
			if (next_ugly_no == next_multiple_of_3) 
			{ 
			i_3 = i_3+1; 
			next_multiple_of_3 = ugly[i_3]*3; 
			} 
			if (next_ugly_no == next_multiple_of_5) 
			{ 
			i_5 = i_5+1; 
			next_multiple_of_5 = ugly[i_5]*5; 
			} 
		}
		return next_ugly_no; 
	} 
	public static void main(String[] args) 
	{ 
		int n; 
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter the value of n(the position of ugly number you want to see):");
		n = scan.nextInt();
		System.out.println("The Ugly Number at " + n + "th position is: " + getNthUglyNum(n)); 
	} 
} 