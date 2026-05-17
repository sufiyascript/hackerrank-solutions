import numpy

n = int(input())

A = []
for _ in range(n):
    A.append(list(map(float, input().split())))

print(round(numpy.linalg.det(A), 2))
