import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

N, D = ints()
X = list(ints())


if max(X) > 0 and min(X) < 0:

    a = abs(min(X))
    b = abs(max(X))

    planA = b+D+b+a+D+a
    planB = b+b+a+D+a+b+b
    planC = a+a+b+D+b+a+a
    planD = a+a+b+b+a+a+b+b + max(0, D-2*(a+b))

    print(min(planA, planB, planC, planD))

else:

    if min(X) >= 0:
        print(max(X)*2 + D)
    elif max(X) <= 0:
        print(abs(min(X))*2 + D)