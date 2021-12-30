# RVS

n = int(input())
l = list(map(int,input().split()))

for i in range(n-1):
    x = l[i]
    y = -1
    for j in range(i+1,n):
        if l[j] > x:
            y = l[j]
            break
    print(y,end=" ")

print(-1)
