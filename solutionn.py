import re

# Input string
s = input().strip()

# Search for first repeating alphanumeric character
match = re.search(r'([a-zA-Z0-9])\1+', s)

if match:
    print(match.group(1))   # First captured group
else:
    print(-1)
