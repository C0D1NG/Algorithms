# Divide and Conquer
## GCD using Euclidean algorithm
```python
def compute_gcd(num1, num2):
   while(num2):
       num1, num2 = num2, num1 % num2
   return num1
```
We loop until <code>num2</code> becomes zero. The statement <code>num1, num2 = num2, num1 % num2</code> does swap variable values.
In each iteration, we place the value of <code>num2</code> in <code>num1</code> and the remainder <code>(num1 % num2)</code> in <code>num2</code>, simultaneously. When <code>num2</code> becomes zero, we have H.C.F. in <code>num1</code>.