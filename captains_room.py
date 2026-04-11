# Read group size
k = int(input())

# Read room numbers
rooms = list(map(int, input().split()))

# Use formula
unique_sum = sum(set(rooms))
total_sum = sum(rooms)

captain_room = (k * unique_sum - total_sum) // (k - 1)

print(captain_room)
