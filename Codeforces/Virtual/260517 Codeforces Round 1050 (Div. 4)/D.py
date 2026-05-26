import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n = int(input())
    a = [*ints()]
    a.sort()

    a_even = []
    a_odd = []
    odd_index = 0

    for i in range(n):
        if a[i] % 2 == 0:
            a_even.append(a[i])
        else:
            a_odd.append(a[i])
    
    if a_odd == []:
        print(0)
    else:
        if len(a_odd) <= 2:
            print(sum(a_even) + max(a_odd))
        else:
            print(sum(a_even) + max(a_odd) + sum(a_odd[(len(a_odd))//2:-1]))