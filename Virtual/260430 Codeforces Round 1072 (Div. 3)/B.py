import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    s, k, m = ints()

    if s > k:
        # 짝수번 뒤집음
        if (m // k) % 2 == 0:
            print(s - (m % k))
        # 홀수번 뒤집음
        else:
            print(s - m)


    else:
        pass