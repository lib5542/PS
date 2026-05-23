import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n = int(input())
    nn = n
    b = [*ints()]
    b.sort()

    for i in reversed(range(n)):
        if b[i] != 0:
            remover = b[i] - 1

            if remover == 0:
                remover = 1
                b[i] = 0
            else:
                b[i] = 1

            nn -= remover

            if nn <= 1:
                nn = 1
                break
    
    counter = 0
    for num in b:
        if num >= 1:
            counter += 1
    
    if counter >= n:
        print(n)
    else:
        if (counter - nn + 1) <= 1:
            print(1)
        else:
            print(counter - nn + 1)
