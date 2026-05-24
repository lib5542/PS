import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n = int(input())
    a = [*ints()]
    
    max_diff = -1
    index = -1
    for i in range(1, n-1):
        before_diff = abs(a[i] - a[i-1]) + abs(a[i+1] - a[i])
        after_diff = abs(a[i+1] - a[i-1])

        if max_diff < before_diff - after_diff:
            max_diff = before_diff - after_diff
            index = i
    
    if max_diff < abs(a[1] - a[0]):
        index = 0
        max_diff = abs(a[1] - a[0])
        
    if max_diff < abs(a[-1]-a[-2]):
        index = n-1
    
    result = 0
    new_arr = a[:index] + a[index+1:]
    for i in range(n-2):
        result += abs(new_arr[i+1]-new_arr[i])
    
    print(result)