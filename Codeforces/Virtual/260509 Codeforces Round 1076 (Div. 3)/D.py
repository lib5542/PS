import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int,input().split())

# x 이상인 칼 개수 구하기
def calc_strike(x, a):
    for i in range(len(a)):
        if a[i] >= x:
            return len(a) - i

def calc_score(b, available_strike):
    sum_monster = 0
    for i in range(len(b)):
        sum_monster += b[i]

        if sum_monster > available_strike:
            return i

    return len(b)

for case in range(int(input())):
    n = int(input())
    a = list(ints())
    b = list(ints())

    min_level = 0
    max_level = max(a)

    scores = []

    for i in range(len(a)):
        available_strike = calc_strike(a[i], a)
        score = calc_score(b, available_strike)
        scores.append(score)

    print(max(scores))