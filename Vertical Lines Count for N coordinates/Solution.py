# RVS

n = int(input())
d = {}
for i in range(n):
    x,y = map(int,input().split())
    if x not in d:
        d[x] = []
    d[x] += [y]
m = int(input())

s = []
for i in d:
    for j in range(len(d[i])):
        for k in range(len(d[i])):
            if j != k:
                x,y = d[i][j],d[i][k]
                x,y = min(x,y), max(x,y)
                if y-x == m and [ x, y ] not in s:
                    s.append([ x, y ])

print(len(s))
