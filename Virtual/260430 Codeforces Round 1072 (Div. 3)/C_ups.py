import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n, k = ints()

    if n == k:
        print(0)
    else:
        counter = 0
        while True:
            counter += 1
            if (n % 2 == 0):
                if (n // 2) == k:
                    print(counter)
                    break
            else:
                if (n // 2) == k or (n // 2) + 1 == k:
                    print(counter)
                    break
            
            if (n % 2 == 0):
                n = n // 2
                if n == 0:
                    print(-1)
                    break
            else:
                n = n // 2
                if n == 0:
                    print(-1)
                    break
                if (n % 2 == 0):
                    n += 1