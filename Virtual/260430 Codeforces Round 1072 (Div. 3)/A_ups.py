import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n = int(input())

    if n == 2:
        print(2)
    elif n == 3:
        print(3)
    else:
        print(n % 2)