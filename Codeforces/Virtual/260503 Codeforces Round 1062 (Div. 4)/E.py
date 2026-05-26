import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n, k, x = ints()
    a_arr = list(ints())

    tele = [0] * k
    tele_index = 0

    while tele_index != k:
        max_d = -1
        for i in range(x):
            # 순간이동과 a가 가장 가까운 거리
            min_d = 100
            for a in a_arr:
                if abs(i-a) < min_d:
                    min_d = abs(i-a)
            # 가장 가까운 거리 중 최대 거리 구하기
            if max_d < min_d:
                max_d = min_d
                # 그때의 i가 텔레포트 설치할 위치
                if i not in tele:
                    tele[tele_index] = i
        tele_index += 1

    tele.sort()
    for t in tele:
        print(t, end=" ")