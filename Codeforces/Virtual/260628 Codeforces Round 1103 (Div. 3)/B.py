import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int, input().split())

for case in range(int(input())):
    n, k = ints()
    s = [-1]
    s.extend([i for i in input()])
    # 인덱스 시작은 1임

    result = "Yes"

    for i in range(1, n-k+1):
        if s[i] == "1":
            s[i] = 0
            if s[i+k] == "1":
                s[i+k] = "0"
            else:
                s[i+k] = "1"

    if "1" in s:
        result = "No"

    print(result)