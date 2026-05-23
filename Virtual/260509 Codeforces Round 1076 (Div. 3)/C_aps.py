import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n, q = ints()
    a = list(ints())
    b = list(ints())

    l_arr = [-1]*q
    r_arr = [-1]*q

    for i in range(q):
        l, r = ints()
        l_arr[i] = l
        r_arr[i] = r

    # 각 인덱스 이후의 최대값을 저장하는 배열
    a_max = [-1]*n
    a_max_num = -1

    b_max = [-1]*n
    b_max_num = -1

    max_arr = [-1] * n

    for i in reversed(range(n)):
        if a[i] > a_max_num:
            a_max_num = a[i]
        a_max[i] = a_max_num

        if b[i] > b_max_num:
            b_max_num = b[i]
        b_max[i] = b_max_num
    
    # 누적합으로 계산
    max_arr[0] = max(a_max[0], b_max[0])
    for i in range(1, n):
        max_arr[i] = max_arr[i-1] + max(a_max[i], b_max[i])

    for i in range(q):
        right = r_arr[i]-1
        left = l_arr[i]-1

        if left - 1 < 0:
            print(max_arr[right], end=" ")
        else:
            print(max_arr[right] - max_arr[left-1], end=" ")