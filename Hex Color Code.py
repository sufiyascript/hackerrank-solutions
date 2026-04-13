import re

n = int(input())

inside_block = False

for _ in range(n):
    line = input()
    
    if '{' in line:
        inside_block = True
    if '}' in line:
        inside_block = False
    
    if inside_block:
        matches = re.findall(r'#[0-9a-fA-F]{3,6}', line)
        
        for m in matches:
            if len(m) == 4 or len(m) == 7:
                print(m)
