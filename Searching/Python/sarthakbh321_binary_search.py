def search(array, target):
    l = 0
    r = len(array)-1

    while(l <= r):
        mid = (l+r)//2

        if(array[mid] == target):
            return target
        elif(array[mid] < target):
            l = mid+1
        else:
            r = mid-1

    return None


arr = list(map(int, input().split()))
target = int(input())
if(search(arr, target) == None):
    print("NOT FOUND")
else:
    print("FOUND")
