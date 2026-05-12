import numpy

# Read coefficients
coefficients = list(map(float, input().split()))

# Read value of x
x = float(input())

# Evaluate polynomial
print(numpy.polyval(coefficients, x))
