# RVS

n = int(input())
l = list(map(int,input().split()))
l = [ bin(i)[2:] for i in l ]

for i in range(n-1):
    l[i] += l[i+1][0]
    l[i+1] = l[i+1][1:]
l[-1] += l[0][0]
l[0] = l[0][1:]

for i in l:
    print(int(i,2),end=" ")
