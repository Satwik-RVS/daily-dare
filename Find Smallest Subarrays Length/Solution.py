# RVS

n = int(input())
a = list(map(int,input().split()))
b = list(map(int,input().split()))

for i in range(n):
    c = b[i]
    x = []
    j = i
    while j < n and c:
        x.append(a[j])
        if a[j] >= a[i]:
            c -= 1
        j += 1
    if c:
        print(-1,end=" ")
    else:
        print(len(x),end=" ")
