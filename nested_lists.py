if __name__ == '__main__':
    students = []
    
    for _ in range(int(input())):
        name = input()
        score = float(input())
        students.append([name, score])
    
    # Get unique scores and sort them
    scores = sorted(set([student[1] for student in students]))
    
    # Second lowest score
    second_lowest = scores[1]
    
    # Get names with second lowest score
    names = [student[0] for student in students if student[1] == second_lowest]
    
    # Print names in alphabetical order
    for name in sorted(names):
        print(name)
