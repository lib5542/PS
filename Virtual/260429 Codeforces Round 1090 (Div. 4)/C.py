import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())
 
from collections import deque
 
for case in range(int(input())):
 
    num = int(input())
    num_deque = deque(i for i in range(1, num*3 + 1))
 
    result = []
    
    for i in range(num*3):
        if i % 3 == 0:
            result.append(num_deque.popleft())
        else:
            result.append(num_deque.pop())
 
    for i in result:
        print(i, end=" ")