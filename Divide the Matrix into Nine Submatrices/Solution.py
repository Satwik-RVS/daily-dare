# RVS

n,m = map(int,input().split())
matrix = [ list(map(int,input().split())) for i in range(n) ]
x,y,p,q = map(int,input().split())

l = []
temp = []
for i in range(n):
    temp += [matrix[i]]
    if i == x-1 or i == y-1:
        l.append(temp)
        temp = []
l.append(temp)

a = b = c = 0
for ele in l:
    a = b = c = 0
    for i in range(len(ele)):
        for j in range(m):
            if j < p:
                a += ele[i][j]
            elif j < q:
                b += ele[i][j]
            else:
                c += ele[i][j]
    print(a, b, c, end = " ")
