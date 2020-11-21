#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(){
    int arr[5] = {1,5,3,2,6};
    int key,i,j;
    //implemention of insertion
    for(i=0;i<5;i++){
        key = arr[i];
        j = i-1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    //print after sort
    for(i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
