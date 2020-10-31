#This code is contributed by github user muskanapp
# Python program for implementation of Selection sort
def selection_sort(arr):
    for i in range(0, len(arr) - 1):
        smallest = i
        for j in range(i + 1, len(arr)):
            if arr[j] < arr[smallest]:
                smallest = j
        arr[i], arr[smallest] = arr[smallest], arr[i]
 
#Driver code to test above 
n = int(input())
arr=[]
for i in range(n):
    e=int(input())
    arr.append(e)
selection_sort(arr)
print("Sorted array is:")
print(arr)
