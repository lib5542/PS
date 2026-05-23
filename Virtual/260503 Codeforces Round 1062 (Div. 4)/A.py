import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    a, b, c, d = ints()
    if (a == b and b == c and c == d):
        print("YES")
    else:
        print("NO")