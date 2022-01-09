# RVS

n = int(input())
l = list(map(int,input().split()))

n = n//2
a = l[:n]
b = l[n:]

c1 = 0
for i in range(n):
    if a[i] <= b[i]:
        c1 += 1

c2 = 0
for i in range(n):
    if a[i] >= b[i]:
        c2 += 1

c3 = 0
for i in range(n):
    if a[i] != b[i]:
        c3 += 1

print(min(c1,c2,c3))
