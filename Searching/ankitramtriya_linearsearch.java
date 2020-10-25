// "static void main" must be defined in a public class.
class LinearSearch {
    public static void main(String[] args) {
        System.out.println("Enter number of values");
        Scanner sc = new Scanner(System.in);
        try{
            int n = sc.nextInt();
            System.out.println("Enter the values ");
            ArrayList<Integer> arr = new ArrayList<>();
            for(int i=0;i<n;i++)
            {
                arr.add(sc.nextInt());
            }
            System.out.println("Enter the value to be searched ");
            int x = sc.nextInt();
            int i=0;
            for(i=0;i<n;i++)
            {
                if(arr.get(i)==x)
                {
                    break;
                }
            }
            if(i==n)
            {
                System.out.println("Value is not present");
            }
            else
            {
                System.out.println("Value is present at index :"+i);
            }
            
        }
        catch(NumberFormatException ne )
        {
            System.out.println("Invalid Input");
        }
        catch(Exception e)
        {
            System.out.println(e.getMessage());
        }
    }
}