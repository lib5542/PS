import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int, input().split())

for case in range(int(input())):
    a, b, x = ints()

    counter = 0
    while True:
        if a == b:
            break
        if abs(a-b) < x:
            if a > b:
                a = (a+1) // x
            else:
                b = (b+1) // x
        else:
            if a > b:
                a = a // x
                b = b + 1
            else:
                a = a + 1
                b = b // x
        counter += 1
    
    print(counter)