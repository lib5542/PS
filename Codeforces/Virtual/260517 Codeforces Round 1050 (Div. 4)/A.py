import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    x, n = list(ints())
    if n % 2 == 0:
        print(0)
    else:
        print(x)