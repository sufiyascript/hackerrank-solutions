import re

t = int(input())

for _ in range(t):
    pattern = input()
    
    # Check for multiple repeat errors manually
    if re.search(r'(\*\*|\+\+|\*\+|\+\*)', pattern):
        print("False")
        continue
    
    try:
        re.compile(pattern)
        print("True")
    except:
        print("False")
