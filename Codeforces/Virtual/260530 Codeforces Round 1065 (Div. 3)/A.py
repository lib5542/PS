import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n = int(input())

    if n == 1:
        print(0)
    elif n == 2:
        print(1)
    elif n == 3:
        print(0)
    elif n == 4:
        print(2)
    else:
        if n % 2 != 0:
            print(0)
        else:
            print(n//4 + 1)