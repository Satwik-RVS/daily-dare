# RVS

n = int(input())
l = list(map(int,input().split()))

maxi,mini = l[0],l[0]
f,s,h = 1,0,0

for i in range(1,n):
    if l[i] > maxi:
        maxi = l[i]
        h += 1
    elif l[i] < mini:
        mini = l[i]
        s += 1
    else:
        f += 1

print(h,f,s)
