# Function to do insertion sort 
def insertionSort(array): 
	for index1 in range(1, len(array)): 
		value = array[index1] 
		# Logic for the insertion sort
		# Basically traversing throught the list and moving the 
		# the elememts which are greater than the current value
		index2 = index1-1
		while index2 >=0 and value < array[index2] : 
			array[index2+1] = array[index2] 
			index2 -= 1
		array[index2+1] = value 

# array = list(map(int,input().strip().split(' ')))
# the above line could be added to take user input
array = [2,3,7,1,6,4,5] 
insertionSort(array) 
print ("Sorted array is:") 
print(*array)
