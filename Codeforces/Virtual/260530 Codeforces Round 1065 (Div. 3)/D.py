import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n = int(input())
    a = [*ints()]
    up_list = []

    a.append(-1) # dummy

    start_group_index = 0

    for i in range(n):
        if (a[i] > a[i+1]):
            up_list.append([min(a[start_group_index:i+1]), max(a[start_group_index:i+1])])
            start_group_index = i+1

    result = "Yes"
    min_n = up_list[0][0]

    # 집합에서 가장 큰 숫자들 누적합 리스트
    p_list = []
    for i in range(len(up_list)):
        p_list.append()

    for i in range(len(up_list)-1):
        if min_n > up_list[i+1][1]:
            result = "No"
            break
        if min_n > up_list[i+1][0]:
            min_n = up_list[i+1][0]
    
    print(result)