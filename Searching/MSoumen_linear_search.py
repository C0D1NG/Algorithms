# Algorithem
def linear_search(item_list:list, search_key):
    for i in range(len(item_list)):
        if (item_list[i]==search_key):
            return i+1
    return -1

# Test
items=[1,2,3,4,5,6,7,8,9]
key=5
res = linear_search(items, key )
if(res==-1):
    print("Not Found !")
else:
    print("Found at position", res)
