# RVS

S = list(map(str,input().split()))

d = {}
for i in S:
    x = sorted(list(i))
    x = "".join(x)
    if x not in d:
        d[x] = []
    d[x].append(i)

for i in d:
    print(*d[i])
