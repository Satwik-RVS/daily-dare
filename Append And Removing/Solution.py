# RVS

n = int(input())
l = list(map(str,input().split()))

s = []
for i in l:
    x,y = i[0],i[1]
    if x == '+':
        s.append(y)
    elif y == '+':
        s.insert(0,x)
    elif x == '-':
        if y in s:
            s = s[::-1]
            s.remove(y)
            s = s[::-1]
    elif y == '-':
        if x in s:
            s.remove(x)

if not(s):
    s.append(-1)

print(*s,sep="")
