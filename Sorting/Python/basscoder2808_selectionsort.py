arr = [2,6,1,4,7,3,5] 

# In this loop we are performing our main operation
# of sorting based on selection sort algorithm
for i in range(len(arr)): 
	min_index = i 
	for j in range(i+1, len(arr)): 
		if arr[min_index] > arr[j]: 
			min_index = j 
    
    # swapping the elemengts
	arr[i], arr[min_index] = arr[min_index], arr[i] 

print ("The Sorted array is :") 
print(*arr)
