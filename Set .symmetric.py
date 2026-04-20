# Read the number of English subscribers (not strictly needed for logic, but part of input format)
n = int(input())
english = set(map(int, input().split()))

# Read the number of French subscribers
b = int(input())
french = set(map(int, input().split()))

# Find symmetric difference: elements in english XOR french
# This returns elements in english OR french, but not in both
unique_subscribers = english.symmetric_difference(french)

# Output the total number of such students
print(len(unique_subscribers))   
