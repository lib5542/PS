import sys
input = lambda : sys.stdin.readline().rstrip()
ints = lambda : map(int, input().split())

number = input()
result = 0

for i in reversed(range(len(number))):
    index = (len(number)-1) - i
    if i == len(number)-1 and int(number[index]) == 9:
        result += 9 * (10**i)
    else:
        if int(number[index]) <= 4:
            result += int(number[index]) * (10**i)
        else:
            result += (9-int(number[index])) * (10**i)

print(result)