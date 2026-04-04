import re

s = input()

pattern = r'(?<=[bcdfghjklmnpqrstvwxyz])[aeiou]{2,}(?=[bcdfghjklmnpqrstvwxyz])'

matches = re.findall(pattern, s, re.I)

if matches:
    for i in matches:
        print(i)
else:
    print(-1)
