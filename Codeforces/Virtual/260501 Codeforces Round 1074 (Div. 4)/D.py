import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):

    n, m, h = ints()
    a = list(ints())

    b = [0] * m
    c = [0] * m

    for i in range(m):
        b[i], c[i] = ints()

    at = a.copy()
    
    for i in range(m):
        at[b[i]-1] += c[i]
        if at[b[i]-1] > h:
            at = a.copy()

    for i in at:
        print(i, end=" ")
