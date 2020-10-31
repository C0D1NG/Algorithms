#include<iostream>
using namespace std;

void Merge(int L[],int nL,int R[], int nR, int A[] )
{
    int i,j,k;
    i=j=k=0;
    while(i<nL && j<nR)
    {
        if(L[i]<= R[j])
        {
            A[k]=L[i];
            i++;
        }
        else
        {
            A[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<nL)
    {
        A[k]=L[i];
        i++;
        k++;
    }
    while(j<nR)
    {
        A[k]=R[j];
        j++;
        k++;
    }
}

void Mergesort(int A[],int n)
{
    int mid=n/2;
    int i;
    int *left= new int[mid];
    int *right= new int[n-mid];
    if(n<2)
      return;
   for(i=0;i<mid;i++)
     left[i]=A[i];
   for(i=mid;i<n;i++)
      right[i-mid]=A[i];
    Mergesort(left,mid);
    Mergesort(right,n-mid);
    Merge(left,mid, right ,n-mid, A);
    delete left;
    delete right;
    
}

//function to display the array
void print(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

//Driver Code
int main()
{
    int n,i;
    cout<<"Enter size of array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<"numbers\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    print(arr,n);
    Mergesort(arr,n);
    print(arr,n);
}

