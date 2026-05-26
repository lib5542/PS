import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n = int(input())
    a = [*ints()]
    b = [*ints()]

    result = 0

    for i in range(n):
        if a[i] > b[i]:
            result += a[i] - b[i]
    
    print(result+1)