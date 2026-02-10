from collections import Counter

s = input().strip()

# Count frequency of each character
count = Counter(s)

# Sort by:
# 1) frequency in descending order
# 2) character in alphabetical order
sorted_chars = sorted(count.items(), key=lambda x: (-x[1], x[0]))

# Print top 3
for char, freq in sorted_chars[:3]:
    print(char, freq)
