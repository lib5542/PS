import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n, k = ints()
    result = 0

    if n == k:
        print(0)
    elif (n % 2 == 0 and n // 2 < k):
        print(-1)
    elif (n % 2 == 1 and (n // 2)+1 < k):
        print(-1)
    elif (n < k):
        print(-1)
    else:
        while n > k:
            if (n % 2 == 0):
                even = True
            else:
                even = False

            n //= 2
            result += 1
        
        if n == k and even:
            print(result)
        elif (n == k or n+1 == k) and not even:
            print(result)
        else:
            print(-1)