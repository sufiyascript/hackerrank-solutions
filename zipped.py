# Enter number of students and subjects
N, X = map(int, input().split())

# Read marks for each subject
marks = [list(map(float, input().split())) for _ in range(X)]

# Transpose using zip and calculate averages
for student_marks in zip(*marks):
    print(sum(student_marks) / X)
