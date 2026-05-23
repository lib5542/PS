import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n, m = list(ints())
    a_arr = [-1] * (n+1)
    b_arr = [-1] * (n+1)
    for i in range(n):
        a_arr[i], b_arr[i] = list(ints())
    
    a_arr.append(10**9 +10)
    b_arr.append(0)
    
    current_side = 0
    current_min = 0
    index = 0
    point = 0
    end = False

    while True:

        # 반드시 이동해야하는 경우
        if (a_arr[index] == current_min+1 and b_arr[index] != current_side):
            if (current_side == 0):
                current_side = 1
            else:
                current_side = 0
            index += 1
            point += 1
            current_min += 1
        elif (a_arr[index] == current_min+1 and b_arr[index] == current_side):
            # 그자리에 있기
            index += 1
            current_min += 1
        # 시간 널널한 경우 왔다갔다한다.
        else:

            if index != n:
                left_min = (a_arr[index] - current_min - 1)
            else:
                left_min = m - current_min
                end = True

            point += left_min
            current_min += left_min
            if left_min % 2 == 1:
                if current_side == 0:
                    current_side = 1
                else:
                    current_side = 0

        if current_min == m:
            break

    print(point)