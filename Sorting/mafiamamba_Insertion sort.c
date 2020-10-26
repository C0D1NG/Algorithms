#include<stdio.h>
int main(){

   int i, j, count, temp, number[25];
//start the program
   printf("How many numbers to enter : \n");
   scanf("%d",&count);
//take the desired number of outputs
   printf("Enter the %d elements: ", count);
   for(i=0;i<count;i++)
      scanf("%d",&number[i]);
//starting of insertion sort
   for(i=1;i<count;i++){
      temp=number[i];
      j=i-1;
      while((temp<number[j])&&(j>=0)){
         number[j+1]=number[j];
         j=j-1;
      }
      number[j+1]=temp;
   }
//display sorted arrau
   printf("Order of the Sorted elements by insertion sort is: ");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);

   return 0;
}
