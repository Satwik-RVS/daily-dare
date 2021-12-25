# RVS

n,m = map(int,input().split())
arr = []

for i in range(n):
    arr += list(map(int,input().split()))
a,b = map(int,input().split())

x = arr.index(a)
arr = arr[x:]+arr[:x]
y = arr.index(b)

print(*arr[:y+1])
