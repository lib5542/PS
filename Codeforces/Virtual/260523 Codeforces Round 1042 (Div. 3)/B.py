import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n = int(input())

    if n == 2:
        print(-1, 2)
    elif n == 3:
        print(-1, 3, -1)
    else:
        if n % 2 == 0:
            print("-1 3 "*(n//2 - 1), "-1 2", sep="")
        else:
            print("-1 3 "*(n//2), "-1", sep="")
