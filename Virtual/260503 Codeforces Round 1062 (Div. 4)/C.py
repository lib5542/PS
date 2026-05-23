import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n = int(input())
    a = list(ints())

    even = False
    odd = False

    for i in range(len(a)):
        if a[i] % 2 == 0:
            even = True
        else:
            odd = True
        if even and odd:
            break
    
    if even and odd:
        a.sort()
    
    for i in a:
        print(i, end=" ")