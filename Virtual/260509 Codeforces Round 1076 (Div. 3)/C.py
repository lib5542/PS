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
    a_max_num = -1
    b_max_num = -1
    max_arr = [-1] * n

    for i in reversed(range(n)):
        if a[i] > a_max_num:
            a_max_num = a[i]

        if b[i] > b_max_num:
            b_max_num = b[i]
        
        max_arr[i] = max(a_max_num, b_max_num)

    for i in range(q):
        print(sum(max_arr[l_arr[i]-1:r_arr[i]]), end=" ")