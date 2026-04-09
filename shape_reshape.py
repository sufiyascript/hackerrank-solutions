import numpy as np

# Read input
arr = list(map(int, input().split()))

# Convert to NumPy array and reshape to 3x3
arr = np.array(arr)
arr = arr.reshape(3, 3)

# Print result
print(arr)
