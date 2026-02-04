T = int(input())

for _ in range(T):
    n = int(input())
    blocks = list(map(int, input().split()))
    
    left = 0
    right = n - 1
    top = float('inf')

    possible = True

    while left <= right:
        if blocks[left] >= blocks[right]:
            chosen = blocks[left]
            left += 1
        else:
            chosen = blocks[right]
            right -= 1

        if chosen > top:
            possible = False
            break

        top = chosen

    print("Yes" if possible else "No")
