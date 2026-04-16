# Read number of students (not really needed)
n = int(input())

# Read English newspaper subscribers
english_set = set(map(int, input().split()))

# Read number of students (not really needed)
b = int(input())

# Read French newspaper subscribers
french_set = set(map(int, input().split()))

# Find intersection and print count
result = english_set.intersection(french_set)

print(len(result))
