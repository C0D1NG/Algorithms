def bubbleSort(vel):
    for num in range(len(vel)-1,0,-1):
        for i in range(num):
            if vel[i]>vel[i+1]:
                temp = vel[i]
                vel[i] = vel[i+1]
                vel[i+1] = temp

vel = [54,26,93,17,77,31,44,55,20]
bubbleSort(vel)
print(vel)
