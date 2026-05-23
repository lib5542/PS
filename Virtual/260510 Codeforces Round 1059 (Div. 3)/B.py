import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n = int(input())
    s = input()

    if s.count("1") == 0:
        print(0)
    else:
        print(s.count("1"))
        for i in range(n):
            if s[i] == "1":
                print(i+1, end=" ")