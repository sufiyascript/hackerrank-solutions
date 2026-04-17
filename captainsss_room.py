# The Captain's Room

k = int(input())
room_list = list(map(int, input().split()))

room_set = set(room_list)

# Formula:
# (sum of unique elements * k - sum of all elements) // (k - 1)

captain_room = (sum(room_set) * k - sum(room_list)) // (k - 1)

print(captain_room)
