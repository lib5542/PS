import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n = int(input())
    a = list(ints())

    if n == 1:
        print(1)
    else:
        a.sort()

        counters = []
        counter = 0

        for i in range(len(a)-1):
            # 연속인 경우
            if a[i]+1 == a[i+1]:
                counter += 1
            elif a[i] == a[i+1]:
                pass
            else:
                counters.append(counter)
                counter = 0

        counters.append(counter)
        print(max(counters)+1)