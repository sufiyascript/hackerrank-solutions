import math
import os
import random
import re
import sys
from datetime import datetime

#
# Complete the 'time_delta' function below.
#
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. STRING t1
#  2. STRING t2
#

def time_delta(t1, t2):
    fmt = "%a %d %b %Y %H:%M:%S %z"
    
    d1 = datetime.strptime(t1, fmt)
    d2 = datetime.strptime(t2, fmt)
    
    return str(abs(int((d1 - d2).total_seconds())))


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for _ in range(t):
        t1 = input().strip()
        t2 = input().strip()

        result = time_delta(t1, t2)

        fptr.write(result + '\n')

    fptr.close()
