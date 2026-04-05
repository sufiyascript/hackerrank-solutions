# Read input
n, m = map(int, input().split())

# Read the matrix
arr = []
for _ in range(n):
    row = list(map(int, input().split()))
    arr.append(row)

# Read column index k
k = int(input())

# Sort based on k-th column
arr.sort(key=lambda x: x[k])

# Print result
for row in arr:
    print(*row)
