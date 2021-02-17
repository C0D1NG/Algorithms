
//kth partition
#include <stdio.h> 
int partition(int J[], int l, int r); 
 
int kthSmallest(int J[], int l, int r, int k) 
{ 
	if (k > 0 && k <= r - l + 1) { 
		int pos = partition(J, l, r); 

		if (pos - l == k - 1) 
			return J[pos]; 
		if (pos - l > k - 1) 
			return kthSmallest(J, l, pos - 1, k); 

	    
		return kthSmallest(J, pos + 1, r, k - pos + l - 1); 
	} 

	
} 

void swap(int* a, int* b) 
{ 
	int temp = *a; 
	*a = *b; 
	*b = temp; 
} 


int partition(int J[], int l, int r) 
{ 
	int x = J[r],i = l; 
	for (int j = l; j <= r - 1; j++) { 
		if (J[j] <= x) { 
			swap(&J[i], &J[j]); 
			i++; 
		} 
	} 
	swap(&J[i], &J[r]); 
	return i; 
} 


int main() 
{  int J[20];
	int i,n,k;
	int K[20];
	printf("\nEnter number of elements in the array\n");
	scanf("%d",&n);
	printf("Enter the Kth value\n[k should lie between 1.....N]\n");
	scanf("%d",&k);
		if(k>n||k<1){
		printf("\nWARNING:Sorry you cant enter values which are not in arrays limit.\nEnter value within limits[1----N]\n");
		return 0;
	     }
	printf("\nEnter the elements of the array\n");
	int j=0;
	for(i=0;i< n;i++){
		scanf("%d",&J[i]);
		K[j]=J[i];
		j++;
		}


	
	printf("\n The %d'th smallest element is %d \n\n\n",k, kthSmallest(J, 0, n - 1, k)); 
     
	printf("-------Array after finding %dth smallest element--------\n",k);
	for(i=0;i< n;i++){
		printf("%d\n",K[i]);
		}
    
	return 0; 
} 
