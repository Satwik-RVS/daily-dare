# RVS

n,k = map(int,input().split())

l = [n]
for i in range(k-1):
    x = l[i]
    y = [ int(j) for j in str(x) ]
    l.append(x + sum(y))

print(*l)
