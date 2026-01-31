import re

# read n (rows) and m (columns)
n, m = map(int, input().split())

# read matrix rows
matrix = []
for _ in range(n):
    matrix.append(input())

# read column-wise
decoded = ""
for j in range(m):
    for i in range(n):
        decoded += matrix[i][j]

# replace symbols/spaces between alphanumeric characters with single space
decoded = re.sub(r'(?<=\w)[^\w]+(?=\w)', ' ', decoded)

# print result
print(decoded)
