# Calendar Module - HackerRank

import calendar

month, day, year = map(int, input().split())

day_index = calendar.weekday(year, month, day)

day_name = calendar.day_name[day_index]

print(day_name.upper())
