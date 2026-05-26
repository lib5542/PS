import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n = int(input())
    a = [*ints()]

    a.sort()

    first = a[0]
    second = a[1]
    
    print(max(second-first, first))