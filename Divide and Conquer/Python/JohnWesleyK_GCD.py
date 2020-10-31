# Function to compute GCD the Using Euclidian algorithm
def compute_gcd(num1, num2):
   while(num2):
       num1, num2 = num2, num1 % num2
   return num1


gcd = compute_gcd(54, 24)
print("The GCD of is ", gcd)

gcd = compute_gcd(30, 40)
print("The GCD of is ", gcd)

