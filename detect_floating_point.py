import re

t = int(input())

for _ in range(t):
    s = input()
    pattern = r'^[+-]?\d*\.\d+$'
    
    if re.match(pattern, s):
        print(True)
    else:
        print(False)
