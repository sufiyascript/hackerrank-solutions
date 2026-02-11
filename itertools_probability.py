from itertools import combinations

# Input
n = int(input())
letters = input().split()
k = int(input())

# Get all index combinations
indices = list(range(n))
all_combinations = list(combinations(indices, k))

# Count favorable combinations
count = 0
for comb in all_combinations:
    for i in comb:
        if letters[i] == 'a':
            count += 1
            break

# Probability
probability = count / len(all_combinations)

# Output (rounded to 3 decimal places)
print(round(probability, 4))
