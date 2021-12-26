# RVS

s = input().strip()
n = len(s)

temp = s[0]
x = 1
maxi = x
l = []

for i in range(1,n):
    temp += s[i]
    if s[i] == '(':
        x += 1
    else:
        maxi = max(x,maxi)
        x -= 1
    if x == 0:
        l.append([temp,maxi])
        temp = ""
        maxi = 0
    

l = sorted(l,key = lambda x:x[1])

for i in l:
    print(i[0],end=" ")
