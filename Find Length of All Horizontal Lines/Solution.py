# RVS

n = int(input())

d = {}
for i in range(n):
    x,y = map(int,input().split())
    if y not in d:
        d[y] = []
    d[y] += [x]

l = []
arr = []
for ele in d:
    s = d[ele]
    for i in range(len(s)):
        for j in range(len(s)):
            if i != j:
                x,y = min(s[i],s[j]),max(s[i],s[j])
                z = y-x
                if [x,y,ele] not in arr:
                    arr.append([x,y,ele])
                    l.append(z)
                    
if not l:
    l += [-1]
l.sort()
print(*l)
