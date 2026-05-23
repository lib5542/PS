n = int(input())
result = 0

for _ in range(n):
    ans = list(map(int, input().split()))
    if sum(ans) >= 2:
        result += 1

print(result)