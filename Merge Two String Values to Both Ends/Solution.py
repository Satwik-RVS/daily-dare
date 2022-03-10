# RVS

s1 = input().strip()
s2 = input().strip()

n1,n2 = len(s1),len(s2)

x,y = "",""
for i in range(min(n1,n2)):
    if s1[0] < s2[0]:
        x += s1[0]
        y = s2[0]+y
    else:
        x += s2[0]
        y = s1[0]+y
    s1 = s1[1:]
    s2 = s2[1:]

x += s1+s2

print(x+y)
