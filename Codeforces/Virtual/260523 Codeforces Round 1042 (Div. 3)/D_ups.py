import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

for case in range(int(input())):
    n = int(input())

    edges = [0] * (n-1)
    num_edges = [0] * (n+1)

    for i in range(n-1):
        u, v = [*ints()]
        num_edges[u] += 1
        num_edges[v] += 1
        edges[i] = [u, v]
    
    if n <= 2:
        print(0)
        continue
    
    leaves = 0
    for edge in num_edges:
        if edge == 1:
            leaves += 1
    
    node_num_leaves = [0] * (n+1)

    for u, v in edges:
        if num_edges[u] == 1:
            node_num_leaves[v] += 1
        if num_edges[v] == 1:
            node_num_leaves[u] += 1
    
    print(leaves - max(node_num_leaves))