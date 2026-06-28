import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

N, K = ints()
A = list(ints())
L = list(ints())

A_sep = []
A_min_max = []

index = 0
for i in L:
    A_sep.append(A[index:index+i])
    A_min_max.append([min(A[index:index+i]), max(A[index:index+i])])
    index += i

cost_A = 0
for i in range(len(A_sep)-1):
    for n in A_sep[i]:
        if n > A_min_max[i+1][0]:
            cost_A += 1
        



print(A_sep)
print(A_min_max)