# 처음엔 set와 index변수를 이용해서 set 안에 없다면 index 변수를 증가시키는 방식 사용
# 중복된 이름이 많이 들어오면 몇 번 index를 사용해야하는지 매번 순차탐색해야해서 시간 초과
# 딕셔너리 key value 이용해서 해결

import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

names = {}

for case in range(int(input())):
    name = input()

    if not (name in names):
        names[name] = 0
        print("OK")
    else:
        names[name] += 1
        print(name + str(names[name]))