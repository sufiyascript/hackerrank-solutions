from collections import OrderedDict

n = int(input())
ordered_dict = OrderedDict()

for _ in range(n):
    item = input().rsplit(' ', 1)
    name = item[0]
    price = int(item[1])
    
    if name in ordered_dict:
        ordered_dict[name] += price
    else:
        ordered_dict[name] = price

for name, price in ordered_dict.items():
    print(name, price)
