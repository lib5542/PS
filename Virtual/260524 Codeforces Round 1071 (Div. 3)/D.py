import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n = int(input())
    p = []
    
    t = [[] for _ in range(n+1)]

    for i in range(2**n):
        binary = bin(i)[2:]
        counter = 0
        for j in reversed(binary):
            if j == "1":
                counter += 1
            else:
                break
        t[counter].append(i)
    
    for i in reversed(range(n+1)):
        for j in t[i]:
            print(j, sep=" ", end=" ")