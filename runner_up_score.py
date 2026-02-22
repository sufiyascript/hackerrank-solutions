if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    
    # Remove duplicates
    unique_scores = list(set(arr))
    
    # Sort the list
    unique_scores.sort()
    
    # Print second highest (runner-up)
    print(unique_scores[-2])
