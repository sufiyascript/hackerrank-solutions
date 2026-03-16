# File Name: collections_namedtuple.py

from collections import namedtuple

n = int(input())
fields = input().split()

Student = namedtuple('Student', fields)

total = 0

for _ in range(n):
    data = input().split()
    student = Student(*data)
    total += int(student.MARKS)

print(total / n)
