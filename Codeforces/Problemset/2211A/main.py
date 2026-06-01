import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int, input().split())

for case in range(int(input())):
    n = int(input())
    p = [*ints()]

    if n == 1:
        print(1)
    elif n == 2:
        print(2, 2, sep=" ")
    else:
        result = ["2" for i in range(n)]
        print(" ".join(result))