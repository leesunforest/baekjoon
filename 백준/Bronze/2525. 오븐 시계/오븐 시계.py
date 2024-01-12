hour, min = map(int, input().split()) 
time = int(input())

min = min + time
while min > 59:
    hour = hour + 1
    min = min - 60
while hour > 23:
    hour = hour - 24

print(hour, min)