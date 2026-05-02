import re

n = int(input())

for _ in range(n):
    line = input()
    
    matches = re.findall(r'(?<!^)#(?:[0-9a-fA-F]{3}|[0-9a-fA-F]{6})\b', line)
    
    for color in matches:
        print(color)
