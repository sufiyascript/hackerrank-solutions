import re

S = input().strip()
k = input().strip()

pattern = re.compile(r'(?={})'.format(k))

matches = list(pattern.finditer(S))

if matches:
    for m in matches:
        print((m.start(), m.start() + len(k) - 1))
else:
    print((-1, -1))
