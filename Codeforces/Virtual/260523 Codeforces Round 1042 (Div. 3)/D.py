import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n = int(input())-1
    u = [-1] * n
    v = [-1] * n

    nodes = {}

    for i in range(n):
        u[i], v[i] = [*ints()]
        nodes[u[i]] = []
        nodes[v[i]] = []
    
    for i in range(n):
        nodes[u[i]].append(v[i])
        nodes[v[i]].append(u[i])

    max_len = -1
    max_v = -1
    for key in nodes:
        value = nodes[key]
        if len(value) > max_len:
            max_len = len(value)
            max_v = key

    current_node = max_v
    counter = 0
    length = 0
    extra = []


    while True:
        temp = nodes[current_node][0]
        nodes[current_node] = nodes[current_node][1:]
        current_node = temp
        length += 1

        if nodes[current_node] == []:
            if length >= 3:
                counter += 1
            current_node = max_v
            length = 0
        else:
            if len(nodes[current_node]) >= 1 and max_v != current_node:
                nodes[max_v].extend(nodes[current_node])
        
        if nodes[max_v] == []:
            break
    
    print(counter)