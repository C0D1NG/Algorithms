'''
    File name: boasmarbun_selection_sort.py
    Author: boasmarbun (https://github.com/boasmarbun)
    Date created: 03/10/2020
    Python Version: 3.7
'''

def selection_sort(input):
    for i in range(len(input)-1):
        min = input[i]
        min_idx = i
        for j in range (i+1, len(input)):
            if(input[j] < min):
                min = input[j]
                min_idx = j
        input[min_idx], input[i] = input[i], input[min_idx]
    return input

# uncomment for testing
# arr = [1, 13,0, -2, -8, -1000, 20192]
# print(selection_sort(arr))