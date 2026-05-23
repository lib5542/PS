import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int, input().split())

n, m, a, b = list(ints())

if a < (b/m):
    print(n*a)
else:
    if (n%m)*a < b and (n%m != 0):
        print((n//m)*b + (n%m)*a)
    else:
        if n % m == 0:
            print((n//m)*b)
        else:
            print(((n//m)+1)*b)