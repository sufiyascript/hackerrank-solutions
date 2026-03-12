from itertools import permutations

s, k = input().split()
k = int(k)

perm = permutations(sorted(s), k)

for i in perm:
    print("".join(i))
