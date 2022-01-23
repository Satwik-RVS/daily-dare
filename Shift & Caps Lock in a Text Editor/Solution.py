# RVS

s = list(map(str,input().split()))

n = len(s)
flag = 0
for i in range(n):
    x = s[i]
    if x[0] == 'C':
        flag = 1 - flag
    elif x[0] == 'S':
        y = x.index('+')
        if flag:
            print(x[y+1:].lower(), end = "")
        else:
            print(x[y+1:].upper(), end = "")
    else:
        if flag:
            print(x.upper(), end = "")
        else:
            print(x.lower(), end = "")
