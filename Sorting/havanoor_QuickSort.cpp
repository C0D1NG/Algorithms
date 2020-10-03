#include<iostream>
using namespace std;


void swap(int arr,int i,int j){
    int temp;

}

int Partition(int arr[],int start,int end)
{
    int left,right,pivot,temp;
    left=pivot=start;
    right=end;

    while(left<right)
    {
        while(arr[pivot]<arr[right] && pivot!=right){
            right--;
        }
        if( arr[pivot]>arr[right])
        {
            temp=arr[pivot];
            arr[pivot]=arr[right];
            arr[right]=temp;
            pivot=right;

        while(arr[pivot]>arr[left] && pivot!=left)
        {
            left++;
        }
        if(arr[left]>arr[pivot])
        {
            temp=arr[pivot];
            arr[pivot]=arr[left];
            arr[left]=temp;
            pivot=left;

        }

        }


    }

    return pivot;


}

void QuickSort(int start, int end ,int arr[])
{
    if(start<end)
    {
        int val;
        val=Partition(arr,start,end);
        QuickSort(start,val-1,arr);
        QuickSort(val+1,end,arr);
    }


}


int main(){
int count,i;
cout<<"Enter the number of elements you want to sort";
cin>>count;
int tosort[count];

for(i=0;i<count;i++)
{   printf("Enter the %d element \n",i);

    cin>>tosort[i];
}

QuickSort(0,count-1,tosort);
cout<<"After Sorting"<<endl;
for(i=0;i<count;i++)
{   
        cout<<tosort[i]<<" ";
}


    return 0;
}