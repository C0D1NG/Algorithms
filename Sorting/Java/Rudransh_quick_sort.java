public class Main
{
    public static void main(String[] args) {
        
        int[] arr= {87,33,44,55,22,33,11,76,14,69}; //testing array
        quickSort(arr,0,9);
        System.out.println("The Sorted Array is: \n");
        for(int i=0;i<10;i++)
        System.out.println(arr[i]); 
    }
     public static int partition(int a[], int beg, int end)  //function to select the location of partition element
    {  
          
        int left, right, temp, loc, flag;     
        loc = left = beg;  
        right = end;  
        flag = 0;  
        while(flag != 1)  
        {  
            while((a[loc] <= a[right]) && (loc!=right))  
            right--;  
            if(loc==right)  
            flag =1;  
            else if(a[loc]>a[right])  
            {  
                temp = a[loc];  
                a[loc] = a[right];  
                a[right] = temp;  
                loc = right;  
            }  
            if(flag!=1)  
            {  
                while((a[loc] >= a[left]) && (loc!=left))  
                left++;  
                if(loc==left)  
                flag =1;  
                else if(a[loc] <a[left])  
                {  
                    temp = a[loc];  
                    a[loc] = a[left];  
                    a[left] = temp;  
                    loc = left;  
                }  
            }  
        }  
        return loc;  
    }  
        
    static void quickSort(int a[], int beg, int end)  //function to perform quickSort using recursion
    {  
          
        int loc;  
        if(beg<end)  
        {  
            loc = partition(a, beg, end);  
            quickSort(a, beg, loc-1);  
            quickSort(a, loc+1, end);  
        }  
    }  
}
