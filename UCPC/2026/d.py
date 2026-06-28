import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

N = int(input())
A = list(ints())

A.sort()


result = 0

for i in reversed(range(len(A))):
    if i % 2 == 0: result += A[i]
    else: result -= A[i]

print(result)
