import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n, k = [*ints()]
    s = [*ints()]
    t = [*ints()]

    for i in range(n):
        s[i] = s[i] % k
        if s[i] > k-s[i]:
            s[i] = k-s[i]
        t[i] = t[i] % k
        if t[i] > k-t[i]:
            t[i] = k-t[i]
    
    s.sort()
    t.sort()

    answer = "YES"
    for i in range(n):
        if s[i] != t[i]:
            answer = "NO"
            break
    print(answer)