import re

def is_valid(card):
    # Rule 1: Must start with 4, 5, or 6
    # Rule 2 & 3: Exactly 16 digits, optional hyphens in groups of 4
    pattern = r'^[456]\d{3}(-?\d{4}){3}$'
    
    if not re.match(pattern, card):
        return "Invalid"
    
    # Remove hyphens for further checking
    card_num = card.replace('-', '')
    
    # Rule 6: Must NOT have 4 or more consecutive repeated digits
    if re.search(r'(\d)\1{3,}', card_num):
        return "Invalid"
    
    return "Valid"


# Input handling
n = int(input())
for _ in range(n):
    card = input().strip()
    print(is_valid(card))
