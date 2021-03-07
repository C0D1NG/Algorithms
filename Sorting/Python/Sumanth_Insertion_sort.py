#function for insertion sort
def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = key
        
#list input from user
arr = list(map(int,input("Enter the numbers: ").strip().split()))

#function call
insertion_sort(arr)

#printing the sorted array
print("The sorted array is")
for i in range(len(arr)):
    print(arr[i],end=" ")