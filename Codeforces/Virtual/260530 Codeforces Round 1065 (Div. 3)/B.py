import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n = int(input())-1
    a = [*ints()]

    if (a[0] < 0 and a[n] < 0):
        a[0] = 0
        a[n] = 0
    elif (a[0] < 0 and a[n] > 0):
        a[0] = a[n]
    elif (a[0] > 0 and a[n] < 0):
        a[n] = a[0]
    
    print(abs(a[n]-a[0]))

    for i in range(n+1):
        if (a[i] < 0):
            print(0, end=" ")
        else:
            print(a[i], end=" ")
    print()