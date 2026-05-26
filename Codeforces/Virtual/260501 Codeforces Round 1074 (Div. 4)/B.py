import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    _ = input()
    n = list(ints())
    print(max(n) * len(n))