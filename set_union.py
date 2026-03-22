# Number of students subscribed to English newspaper
n = int(input())
english = set(map(int, input().split()))

# Number of students subscribed to French newspaper
b = int(input())
french = set(map(int, input().split()))

# Union of both sets
result = english.union(french)

# Output total number of unique students
print(len(result))
