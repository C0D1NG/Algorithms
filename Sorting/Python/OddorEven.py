#Exercise 3

def is_even(my_number): #Returns if my_number is an Odd or Even number.
    if my_number % 2 == 0:
        return "Even"
    else:
        return "Odd"

print(is_even(5)) #Returns Odd.
print(is_even(18)) #Returns Even.
print(is_even(-3)) #Returns Odd.
print(is_even(0)) #Returns Even.