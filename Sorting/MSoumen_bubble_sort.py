def bubble_sort(arr): 
    # Traverse through all elements 
    for i in range(len(arr)-1):
        for j in range(0, len(arr)-i-1):  
            if arr[j] > arr[j+1] : 
                arr[j], arr[j+1] = arr[j+1], arr[j] 
  
# Testing
nums = [22, 55, 00, 11, 76, 99, 1, 9, 3, 5] 
print("Before Sorting :", nums)

bubble_sort(nums)
print ("After Sorting :", nums)