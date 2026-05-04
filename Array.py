import numpy as np

n, m = map(int, input().split())

# Read arrays
a = np.array([list(map(int, input().split())) for _ in range(n)])
b = np.array([list(map(int, input().split())) for _ in range(n)])

# Operations
print(a + b)
print(a - b)
print(a * b)
print(a // b)          # IMPORTANT: use // for integer division
print(a % b)
print(a ** b)
