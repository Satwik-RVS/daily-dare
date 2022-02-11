# RVS

n = int(input())
l = list(map(str,input().split()))

sumi = 0
s = []
for i in range(n):
    x = l[i].replace('|','')
    sumi += int(x)
    y = l[i].split('|')
    s += [int(j) for j in y]

s.sort()
m = len(s)
sumj = 0
for i in range(0,m,2):
    x = str(s.pop(0))+str(s.pop(0))
    sumj += int(x)

print(sumi,sumj)
