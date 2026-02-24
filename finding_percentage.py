if __name__ == '__main__':
    n = int(input())
    student_marks = {}

    for _ in range(n):
        data = input().split()
        name = data[0]
        scores = list(map(float, data[1:]))
        student_marks[name] = scores

    query_name = input()

    marks = student_marks[query_name]
    average = sum(marks) / len(marks)

    print(f"{average:.2f}")
