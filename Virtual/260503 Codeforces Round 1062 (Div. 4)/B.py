import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n = int(input())
    s, t = input().split()

    charset = set(i for i in s)
    b = True

    for c in charset:
        if s.count(c) != t.count(c):
            b = False
            break
    
    if b == True:
        print("YES")
    else:
        print("NO")