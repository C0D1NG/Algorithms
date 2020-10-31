#function for binary search
def binary_search(arr, n):
    low=0
    high = len(arr) - 1
    mid = 0
    while low<=high:
        mid = (low + high) // 2
        
        #check if n is greater than mid, ignore left half
        if arr[mid] < n:
            low = mid + 1
            
        #check if n is less than mid, ignore right half
        elif arr[mid] > n:
            high = mid - 1
        
        #n is present at mid
        else:
            return mid
    
    #If element is not there in the list
    return -1

total = int(input("Enter the number of elements: "))
arr = list(map(int,input("Enter the numbers: ").strip().split()))
val = int(input("Enter the element to be searched: "))

#Function call
ans=binary_search(arr, val)
if ans != -1:
    print("Element is present at index",str(ans))
else:
    print("Element is not present in array")