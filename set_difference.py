# Number of students who know English
n = int(input())

# Roll numbers of students who know English
english_set = set(map(int, input().split()))

# Number of students who know French
m = int(input())

# Roll numbers of students who know French
french_set = set(map(int, input().split()))

# Students who only know English
result = english_set.difference(french_set)

# Output the count
print(len(result))
