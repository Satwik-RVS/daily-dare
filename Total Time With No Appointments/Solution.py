# RVS

n = int(input())
time = 0
for i in range(n):
    x,y = map(str,input().split())
    a,b = map(int,x.split(":"))
    c,d = map(int,y.split(":"))
    time += d-b
    time += (c-a)*60

print(1440-time)
