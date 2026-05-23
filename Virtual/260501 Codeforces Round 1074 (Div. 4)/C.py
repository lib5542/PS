import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    _ = input()
    arr = list(ints())
    arr.sort()

    counter = 0
    counters = []

    t = True

    if len(arr) == 1:
        print(1)
    else:
        for i in range(len(arr)-1):
            # 연속인 경우
            if arr[i]+1 == arr[i+1]:
                counter += 1
            elif arr[i] == arr[i+1]:
                pass
            else:
                counters.append(counter)
                counter = 0
                t = False
            if t:
                counters.append(counter)
        if counters:
            print(max(counters)+1)