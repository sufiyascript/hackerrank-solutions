# Read input
n = int(input())
numbers = list(map(int, input().split()))

# Check conditions
all_positive = all(x > 0 for x in numbers)
any_palindrome = any(str(x) == str(x)[::-1] for x in numbers)

# Final result
print(all_positive and any_palindrome)
