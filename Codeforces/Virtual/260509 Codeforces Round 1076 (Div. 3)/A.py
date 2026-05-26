import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n, s, x = ints()
    a_arr = ints()

    arr_sum = sum(a_arr)

    while True:
        if arr_sum < s:
            arr_sum += x
        if arr_sum == s:
            print("YES")
            break
        if arr_sum > s:
            print("NO")
            break