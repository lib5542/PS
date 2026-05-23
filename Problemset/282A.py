n = int(input())
result = 0

while n:

    s = input()
    if "+" in s:
        result += 1
    else:
        result -= 1
        
    n -= 1

print(result)