import re
import email.utils

n = int(input())

for _ in range(n):
    name, addr = email.utils.parseaddr(input())
    
    # regex pattern for valid email
    pattern = r'^[a-zA-Z][\w\.-]*@[a-zA-Z]+\.[a-zA-Z]{1,3}$'
    
    if re.match(pattern, addr):
        print(email.utils.formataddr((name, addr)))
