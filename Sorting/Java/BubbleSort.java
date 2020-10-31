import java.io.*; 
import java.util.*; 
public class BubbleSort
{
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		
		//Taking Input

		System.out.print("Enter array: ");
		String str=s.nextLine();
	    String stringArr[]=str.split(" ");
	    int intArr[]=new int[stringArr.length];
	    for(int i=0;i<stringArr.length;i++){
	        intArr[i]=Integer.parseInt(stringArr[i]);
	    }
	    
	    
	    //Bubble sort implementaion

	    for(int i=0;i<intArr.length-1;i++){
	        for(int j=0;j<intArr.length-1;j++){
	            if(intArr[j+1]<intArr[j]){
	                int val=intArr[j];
	                intArr[j]=intArr[j+1];
	                intArr[j+1]=val;
	            }
	        }
	    }
	    
	    //Output

	    String stringArr1 = Arrays.toString(intArr);
	    System.out.println("Sorted array: "+stringArr1);
	}
}
