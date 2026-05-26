import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n = int(input())
    p = [*ints()]

    maximum = -1
    r = -1
    l = -1
    check = True

    for i in range(len(p)):
        if p[i] != n-i and check:
            l = i
            check = False
        if p[i] > maximum and i > l and not check:
            maximum = p[i]
            r = i
    
    if l == -1:
        for i in p:
            print(i, end=" ")
    else:
        new_arr = []
        new_arr.extend(p[0:l])
        new_arr.extend(reversed(p[l:r+1]))
        new_arr.extend(p[r+1:])
        for i in new_arr:
            print(i, end=" ")