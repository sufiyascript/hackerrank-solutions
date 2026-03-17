# Enter your code here. Read input from STDIN. Print output to STDOUT

# Input
n = int(input())
set_A = set(map(int, input().split()))

m = int(input())
set_B = set(map(int, input().split()))

# Symmetric Difference
result = set_A.symmetric_difference(set_B)

# Sort and print
for num in sorted(result):
    print(num)
