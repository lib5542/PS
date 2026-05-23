import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int, input().split())

n = int(input())
x_arr = list(ints())
x_arr.sort()
q = int(input())

def bs(arr, x):
    left = 0
    right = len(arr)-1
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] <= x:
            left = mid + 1
        else:
            right = mid - 1
    return right

for i in range(q):
    m = int(input())
    # m보다 작거나 같은 x_arr의 x 개수 찾아야함. Binary Search
    print(bs(x_arr, m)+1)