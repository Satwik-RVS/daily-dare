# RVS

n = int(input())
l = [ list(map(str,input().split())) for i in range(n) ]


for i in range(n):
    if "#" in l[i]:
        j = l[i].index("#")
        break

x,y = (2*n)-i-1,(2*n)-j-1
s = []
for i in range(x):
    s.append(["*" for j in range(y)])

for i in range(x):
    for j in range(y):
        if ((i<x-n and j >= n) or (i>=n and j<y-n)):
            s[i][j] = '-'

for row in s:
    print(*row)
