import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n = int(input())

    nums = [2*i + 1 for i in range(n+1)]
    result = []

    for i in range(n):
        result.append(nums[i] * nums[i+1])

    for i in result:
        print(i, end=" ")