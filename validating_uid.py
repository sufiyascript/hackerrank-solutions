import re

t = int(input())

for _ in range(t):
    uid = input().strip()
    
    # Check all conditions
    if (
        len(uid) == 10 and
        uid.isalnum() and
        len(set(uid)) == 10 and
        len(re.findall(r'[A-Z]', uid)) >= 2 and
        len(re.findall(r'[0-9]', uid)) >= 3
    ):
        print("Valid")
    else:
        print("Invalid")
