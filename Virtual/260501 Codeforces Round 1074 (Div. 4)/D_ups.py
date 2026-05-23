import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n, m, h = ints()
    a = list(ints())
    a_c = a.copy()

    last_modified_t = [0] * n
    last_crashed = -1

    b = [0] * m
    c = [0] * m

    for i in range(m):
        b[i], c[i] = ints()
        b[i] -= 1 # index

        if (last_modified_t[b[i]] < last_crashed):
            a_c[b[i]] = a[b[i]] + c[i]
        else:
            a_c[b[i]] += c[i]
        last_modified_t[b[i]] = i

        if a_c[b[i]] > h:
            a_c[b[i]] = a[b[i]]
            last_crashed = i
    
    for i in range(n):
        if last_modified_t[i] < last_crashed:
            a_c[i] = a[i]
        print(a_c[i], end=" ")