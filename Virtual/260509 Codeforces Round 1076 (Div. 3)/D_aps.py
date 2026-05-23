import sys
import bisect
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n = int(input())
    a_arr = list(ints())
    b_arr = list(ints())

    a_arr.sort()

    b_prefix_sum = [0] * (n+1)

    for i in range(n):
        b_prefix_sum[i+1] = b_prefix_sum[i] + b_arr[i]

    score = -1
    max_level = -1
    win = n
    
    for i in range(n):
        x = a_arr[i]
        strike = n - i
        
        win = bisect.bisect_right(b_prefix_sum, strike) - 1
        score = max(score, win * x)
    
    print(score)