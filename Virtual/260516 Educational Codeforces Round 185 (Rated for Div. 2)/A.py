import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n = int(input())
    if n == 1:
        result = 1
    elif n == 2:
        result = 4 + 3 + 2
    elif n == 3 or n == 4:
        result = n**2 + n**2 - 1 + n**2 - 2 + n**2 - n - 1
    else:
        result = (n**2 - n) + (n**2 - n - 1) + (n**2 - n - 2) + (n**2 - 1) + (n**2 - 2*n - 1)
    print(result)