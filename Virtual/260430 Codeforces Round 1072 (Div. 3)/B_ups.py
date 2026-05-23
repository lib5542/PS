import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    s, k, m = ints()

    if s > k:
        m %= 2*k
        if 0 <= m and m <= k-1:
            print(s-m)
        else:
            print(k - (m-k))
    else:
        m %= k
        if 0 <= m and m < s:
            print(s-m)
        else:
            print(0)