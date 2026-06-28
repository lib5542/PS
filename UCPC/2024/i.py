import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())


N = int(input())

flowers = []

for _ in range(N):
    command = input().split()

    if command[0] == "L":
        new_flower = []
        for x in flowers:
            if (x-1) not in flowers:
                new_flower.append(x-1)
        for x in new_flower:
            flowers.add(x)

    elif command[0] == "R":
        new_flower = []
        for x in flowers:
            if (x+1) not in flowers:
                new_flower.append(x+1)
        for x in new_flower:
            flowers.add(x)

    elif command[0] == "C":
        flowers.add(int(command[1]))

    elif command[0] == "Q":
        print(len(flowers))

    else:
        print("error")