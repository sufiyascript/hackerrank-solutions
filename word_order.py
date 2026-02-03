n = int(input())

words = {}
order = []

for _ in range(n):
    w = input().strip()
    if w in words:
        words[w] += 1
    else:
        words[w] = 1
        order.append(w)

print(len(words))
print(*[words[w] for w in order])
