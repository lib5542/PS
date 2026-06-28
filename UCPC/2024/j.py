import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

from collections import deque


for case in range(int(input())):

    stack = deque()

    counter = 1
    result = 0

    n = int(input())
    s = input()

    for c in s:
        if stack:
            if stack[-1] == c:
                if state == "close":
                    counter += 1
                    result += counter
                else:
                    result += 1

                stack.pop()
                state = "close"

            else:
                stack.append(c)
                state = "open"



        else:
            stack.append(c)
            state = "open"
            counter = 1

    if len(stack) == 0:
        print(result)
    elif len(stack) == 1 and stack[0] == "H":
        print(result)
    else:
        print(-1)