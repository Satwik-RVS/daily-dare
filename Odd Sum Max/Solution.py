# RVS

n = int(input())
l = list(map(int,input().split()))

maxi = -1
for i in range(n+1):
    x = l[:i]
    y = l[i+1:]
    z = sum(x+y)
    if z%2 and z > maxi:
        maxi = z

print(maxi)
