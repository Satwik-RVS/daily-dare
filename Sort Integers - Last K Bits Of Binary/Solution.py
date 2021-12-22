# RVS

n = int(input())
l = list(map(int,input().split()))
k = int(input())

d = {}
for i in range(n):
    x = l[i]
    b = bin(x)[2:]
    y = b[-k:]
    if y not in d:
        d[y] = []
    d[y].append(x)

x = sorted(d.keys())
for i in x:
    print(*sorted(d[i]),end=" ")
