#include<stdio.h>

int main(){
    int n,i,j,t = 0;
    printf("Enter Number of Elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter Elements:-\n");
    for (i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j] > a[j+1]){
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    printf("Sorted Element: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    int k = 0,loc = 0;
    printf("\nEnter Search Element:");
    scanf("%d",&k);
    int l = 0,h = (n-1),m = 0;
    while(l <= h){
        m = ((l + h) / 2);
        
        if(k < a[m]){
            h = (m - 1);
        }
        
        else if(k > a[m]){
            l = (m + 1);
        }
        
        else if(k == a[m]){
            loc++;
            break;
        }
    }
    
    if(loc > 0){
        printf("Element found at position %d",m+1);
    }
    else{
        printf("Element not found");
        
    }
return 0;
}