from itertools import product

# Input
k, m = map(int, input().split())
lists = []

for _ in range(k):
    data = list(map(int, input().split()))
    n = data[0]
    elements = data[1:]
    lists.append([x*x % m for x in elements])

# Compute maximum value
result = 0
for combination in product(*lists):
    result = max(result, sum(combination) % m)

print(result)
