import re

for _ in range(int(input())):
    line = input()

    # Replace && with and
    line = re.sub(r'(?<= )&&(?= )', 'and', line)

    # Replace || with or
    line = re.sub(r'(?<= )\|\|(?= )', 'or', line)

    print(line)
