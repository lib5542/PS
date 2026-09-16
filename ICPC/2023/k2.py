import sys
input = lambda : sys.stdin.readline().rstrip()

dic = {}

n = int(input())
a = [[*map(int,input().split())] for _ in range(n)]

for i in a:
    for j in a:
        x = i[0]+j[0]
        y = i[1]+j[1]
        if (x,y) in dic:
            dic[(x,y)] += 1
        else:
            dic[(x,y)] = 1
print(max(dic.values()))