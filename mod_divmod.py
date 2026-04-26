# File Name: mod_divmod.py

a = int(input())
b = int(input())

result = divmod(a, b)

print(result[0])  # Quotient
print(result[1])  # Remainder
print(result)     # Tuple (quotient, remainder)
