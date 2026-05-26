import sys
import math

input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

def prime(n):
    l = [i for i in range(2, n+1)]
    for i in range(len(l)):
        if l[i] != 0:
            for j in range(i+1, len(l)):
                if l[j] % l[i] == 0:
                    l[j] = 0
        if i == int(math.sqrt(n)) + 1:
            break
    result = []
    for i in l:
        if i != 0:
            result.append(i)
    return result

for case in range(int(input())):
    n = int(input())
    a_arr = [*ints()]

    prime_x_arr = prime(300) #임의의 숫자

    run = True
    for prime_x in prime_x_arr:
        if prime_x > 10**18:
            print(-1)
            break
        for a in a_arr:
            if a % prime_x != 0:
                print(prime_x)
                run = False
                break
        if not run:
            break
