num_one = int(input("What Is Your First Number ? /n"))
num_two = int(input("What Is Your Second Number ? /n"))

if num_two > num_one:
    mn = num_one
else:
    mn = num_two

for i in range(1, mn+1):
    if num_one%i==0 and num_two%i==0:
        hcf = i

print(f"The HCF / GCD Of These Two Numbers Is {hcf}")