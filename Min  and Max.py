import numpy

# Read input
n, m = map(int, input().split())

# Create array
arr = numpy.array([list(map(int, input().split())) for _ in range(n)])

# Find min along axis 1, then max of that result
print(numpy.max(numpy.min(arr, axis=1)))
