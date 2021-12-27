# RVS

n = int(input())
l = list(map(str,input().split()))

for i in range(n-1):
    l[i] += l[i+1][0]
    l[i+1] = l[i+1][1:]
l[n-1] += l[0][0]
l[0] = l[0][1:]

sumi = 0
for i in l:
    sumi += int(i)

print(sumi)
