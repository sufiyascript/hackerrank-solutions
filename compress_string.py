from itertools import groupby
s = input()
result = [(len(list(group)), int(key)) for key, group in groupby(s)]
print(*result)
