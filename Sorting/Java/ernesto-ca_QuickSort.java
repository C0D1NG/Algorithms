import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class QuickSort {

	// Sort method of an array 
	// Remember the phrase: "Divide and conquer" because 
	// that is the mission of an QUICKSORT
	// Hope this will helpful for you! - ernecto-ca
    public void quick_sort(int [] array,int nElements, int arrayHalf) {
	
	int left = 0, right = 0, aux = 0, finalS;
	boolean	flag = true;
		
		// rigth side 
		right = nElements - 1; 
		// final state (all element are ordered)
		finalS = 0;
		while(flag)
		{	
			// Finish the loop
			flag = false;

			// While element in the middle is lower/equals than finish element (right side) AND arrayHalf (pointer) is different than right (pointer) 
			while((array[arrayHalf] <= array[right]) && (arrayHalf != right))
			{
				// decrement the pointer of right side
				right=right-1;
			}
			
			// If the arrayHalf (pointer) is different of right (pointer)
			if(arrayHalf != right)
			{	// Put to aux the element in array[arrayHalf]
				aux = array[arrayHalf]; 
				// Put the element in array[rigth] to array[arrayHalf]
				array[arrayHalf] = array[right];
				// Put the element in aux to the array[rigth] (rigth side of the array)
				array[right]=aux; 
				// Finally put the same value to both pointers
				arrayHalf = right;
			}

			// While element in the middle is higher/equals than first element (left side) AND arrayHalf (pointer) is different than left (pointer) 
			while((array[arrayHalf] >= array[left]) && (arrayHalf != left))
			{	
				// increment  the pointer of left side
				left = left + 1;
			}

			// If the arrayHalf (pointer) is different of left (pointer)
			if(arrayHalf != left)
			{
				// Continue the loop 
				flag = true; 
				// Put to aux the element in array[arrayHalf]
				aux = array[arrayHalf];
				// Put the element in array[left] to array[arrayHalf]
				array[arrayHalf] = array[left]; 
				// Put the element in aux to the array[left] (left side of the array)
				array[left] = aux; 
				// Finally put the same value to both pointers
				arrayHalf = left;
			}

			// If pointer arrayHalf (minus one) is higher than final state (0)
			if( (arrayHalf-1) > finalS)
				// Yes, so let´s do it again with recursive
            	quick_sort(array,nElements,arrayHalf-1);

		}
	}
	
	public void printArray(int [] array )
    {
    	for (int i=0; i<array.length;++i)
		{
			System.out.println("Element ["+(i+1)+"]= "+array[i]);
		}
    }

    public static void main(String[] args) throws IOException {
    
        BufferedReader keyword = new BufferedReader (new InputStreamReader (System.in));
		int nElements = 0;
		int arrayHalf = 0;
        int[] array;
        
        QuickSort object = new  QuickSort();
        
        
	   	   	System.out.println("Number of elements to insert:");
            nElements=Integer.parseInt(keyword.readLine());

			array = new int[nElements];

			// Let´s insert the numbers
			int index, data=0;
			for (index=0; index<nElements; ++index)
			{
				do{
					System.out.print("array ["+(index+1)+"]= ");
					
					data= Integer.parseInt(keyword.readLine());
					
					array[index]=data;

					if ((data<1)||(data>100))
						  System.out.println(" Only numbers between 0 and 100");
		
				}while ((data<1)||(data>100));
			}
			arrayHalf = nElements / 2;
			
			object.quick_sort(array, nElements, arrayHalf);
            object.printArray(array);
    }
}