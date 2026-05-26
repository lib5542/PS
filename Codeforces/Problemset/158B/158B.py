n = int(input())

s = list(map(int, input().split()))

N_1 = 0
N_2 = 0
N_3 = 0
N_4 = 0

for n in s:
    if n == 1:
        N_1 += 1
    elif n == 2:
        N_2 += 1
    elif n == 3:
        N_3 += 1
    elif n == 4:
        N_4 += 1
    
result = 0

result += N_4
N_4 = 0

result += N_3
N_1 -= N_3


if N_2 == 1:
    result += 1
    N_1 -= 2
elif N_2 >= 2:
    result += (N_2) // 2
    if (N_2 % 2 == 1):
        result += 1
        N_1 -= 2

if 1 <= N_1 and N_1 <= 4:
    result += 1
elif N_1 >= 5:
    result += (N_1 // 4)
    if (N_1 % 4 != 0):
        result += 1

print(result)