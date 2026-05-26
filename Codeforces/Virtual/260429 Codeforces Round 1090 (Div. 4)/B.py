import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())
 
for case in range(int(input())):
    nums = list(ints())
    maxN = max(nums)
 
    result = 0
    print(-sum(nums) + maxN*2)