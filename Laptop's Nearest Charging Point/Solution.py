# RVS

l = list(input().strip())
n = len(l)

s = []
for i in range(n):
    if l[i] == 'L':
        flag1 = 0
        x,y = 0,0
        for j in range(i+1,n):
            x += 1
            if l[j] == '#':
                break
            elif l[j] == '*':
                flag1 = 1
                break
        flag2 = 0
        for k in range(i-1,-1,-1):
            y += 1
            if l[k] == '#':
                break
            elif l[k] == '*':
                flag2 = 1
                break
        if flag1 and flag2:
            s.append(min(x,y))
        elif flag1:
            s.append(x)
        elif flag2:
            s.append(y)
        else:
            s.append(-1)

print(*s)
