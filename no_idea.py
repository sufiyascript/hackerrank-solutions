# Read n and m
n, m = map(int, input().split())

# Read the array
arr = list(map(int, input().split()))

# Read sets A and B
A = set(map(int, input().split()))
B = set(map(int, input().split()))

# Initialize happiness
happiness = 0

# Calculate happiness
for num in arr:
    if num in A:
        happiness += 1
    elif num in B:
        happiness -= 1

# Print result
print(happiness)
