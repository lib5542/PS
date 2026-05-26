import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n = int(input())

    if n <= 3:
        print(2)
    elif n <= 5:
        print(1)
    else:
        print(0)