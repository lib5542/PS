import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int, input().split())

for case in range(int(input())):
    n, c, k = [*ints()]
    a = [*ints()]
    a.sort()

    result = c
    current = 0

    while True:
        if a[current] > result:
            print(result)
            break
        else:
            gap = result - a[current]

            if k >= 0:
                if k - gap >= 0:
                    result += gap
                    k -= gap
                else:
                    result += k
                    k = 0

            result += a[current]

        current += 1
        if current == n:
            print(result)
            break