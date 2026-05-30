import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n = int(input())
    a = [*ints()]
    b = [*ints()]

    diff_index = -1
    for i in reversed(range(n)):
        if (a[i] != b[i]):
            diff_index = i
            break
    
    if (diff_index+1) % 2 == 0:
        winner = "Mai"
    else:
        winner = "Ajisai"
    
    a_t = a[0]
    for i in range(1, n):
        a_t = a_t ^ a[i]
    
    b_t = b[0]
    for i in range(1, n):
        b_t = b_t ^ b[i]
    
    if (a_t == b_t):
        winner = "Tie"
    
    print(winner)