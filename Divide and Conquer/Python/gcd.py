def gcd(a,b):
#The two numbers are passed as arguments to a recursive function.
    if(b==0):
        return a
        #When the second number becomes 0, the first number is returned.
    else:
        return gcd(b,a%b)
        #Else the function is recursively called with the arguments as the second number and the remainder when the first number is divided by the second number.
        
        
a=int(input("Enter first number:"))
b=int(input("Enter second number:"))
#User must enter two numbers

GCD=gcd(a,b)
print("The GCD of 2 numbers is : ")
print(GCD)
