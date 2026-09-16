import sys
a = input()
sad = 0
glad = 0


for i in a:
    if i in "HAPY":
        glad += 1
    if i in "SAD":
        sad += 1
        flag = 1
ret = glad / (glad+sad)
ret *= 100
print(round(ret,2))
