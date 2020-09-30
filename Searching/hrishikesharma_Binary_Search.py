def binary_search(arr, key): 
    low = 0
    high = len(arr) - 1
    mid = 0
  
    while low <= high: 
  
        mid = (high + low) // 2
  
    
        if arr[mid] < key: 
            low = mid + 1
  
    
        elif arr[mid] > key: 
            high = mid - 1
  
       
        else: 
            return mid 
  

    return -999
  
  

arr = eval(input("Enter a array: "))
x = int(input("Enter the number to be searched: "))
  
 
result = binary_search(arr, x) 
  
if result != -999: 
    print("Element is present at index", str(result)) 
else: 
    print("Element is not present in array") 
