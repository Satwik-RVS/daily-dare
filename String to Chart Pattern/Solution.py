# RVS

s = list(input().strip())
n = len(s)
l = [ [ '-' for j in range(n*2) ] for i in range(n*2) ]

i,j = n,0
x = -1
flag = 0
while(s):
    y = s.pop(0)
    if y.lower() in 'aeiou':
        x *= -1
    l[i][j] = y
    i += x
    j += 1

for i in range(n*2):
    x = l[i]
    if set(x) != {'-'}:
        for j in range(n*2):
            if len(set(x[j:])) == 1 and set(x[j:]) == {'-'}:
                break
            print(x[j],end="")
        print()
