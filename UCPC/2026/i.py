import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

T = int(input())

for _ in range(T):
    N = int(input())
    A = list(ints())

    result = "Yes"

    if N % 2 == 0:
        for i in range(N//2):
            A[i+1] += (A[N-i-1]-A[i])
            A[i] += (A[N-i-1]-A[i])
        if A[N//2 -1] != A[N//2]:
            result = "No"
        
    else:
        for i in range(N//2):
            A[i+1] += (A[N-i-1]-A[i])
            A[i] += (A[N-i-1]-A[i])
        if A[N//2] > A[N//2 - 1]:
            result = "No"

    print(result)