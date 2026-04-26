# Fibonacci function
def fibonacci(n):
    fib = [0, 1]
    for i in range(2, n):
        fib.append(fib[i-1] + fib[i-2])
    return fib[:n]

# Lambda function to cube numbers
cube = lambda x: x**3

# Input
n = int(input())

# Map + Lambda
print(list(map(cube, fibonacci(n))))
