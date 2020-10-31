def linearsearch(llist,key):
    for i in range(len(llist)):
        if llist[i]==key:
            return i+1 #returns the position of the key in the list
    return -1  #returns -1 if key is not found
llist=[int(x)for x in input().split()]
key=int(input())
found=linearsearch(llist,key)
if found>0:
    print(key,"is found at position",found)
else:
    print("not found")
