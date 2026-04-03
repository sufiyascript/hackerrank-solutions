# Take input
x, k = map(int, input().split())

# Polynomial input
P = input()

# Evaluate polynomial
result = eval(P)

# Check condition
print(result == k)
