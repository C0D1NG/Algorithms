import java.util.Scanner;

public class Amritanshusikdar_bubblesort {
    static void bubbleSort(int[] array, int size) {
        int temp = 0;
        for (int i = 0; i < size; i++) {
            for (int j = 1; j < (size - i); j++) {
                if (array[j - 1] > array[j]) {
                    temp = array[j - 1];
                    array[j - 1] = array[j];
                    array[j] = temp;
                }
            }
        }

    }

    public static void main(String[] args) {
        int n;
        Scanner userInput = new Scanner(System.in);

        System.out.print("Enter the no. of elements in array: ");
        n = userInput.nextInt();
        int array[] = new int[n];
        System.out.println("\nEnter the elements of array: ");
        for (int i = 0; i < n; i++) {
            array[i] = userInput.nextInt();
        }

        bubbleSort(array, n);
        System.out.println("\n");
        System.out.println("Array after bubble sort: ");
        for (int i = 0; i < n; i++) {
            System.out.print(array[i] + " ");
        }
        userInput.close();
    }
}