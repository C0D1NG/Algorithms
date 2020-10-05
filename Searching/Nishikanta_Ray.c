//Name-Nishikanta Ray
//github link-https://github.com/NishikantaRay
//Program name-Linear search
#include <stdio.h>
int main()
{
  int array[100], search, c, n;
//input the range of array
  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integer\n", n);
//input the all number inside the array 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
//input the number you want to search
  printf("Enter a number to search\n");
  scanf("%d", &search);

  for (c = 0; c < n; c++)
  {
    if (array[c] == search) 
    {
      printf("%d is present at location %d.\n", search, c+1);
      break;
    }
  }
//print the position of element  
  if (c == n)
    printf("%d isn't present in the array.\n", search);

  return 0;
}