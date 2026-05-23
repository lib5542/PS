n, l = map(int, input().split())
a_arr = list(map(int, input().split()))
a_arr.sort()

max_distance = -1
for i in range(len(a_arr)-1):
    distance = a_arr[i+1] - a_arr[i]
    if distance > max_distance:
        max_distance = distance

print(max(max_distance / 2, a_arr[0], l-a_arr[-1]))