# RVS

R,C = map(int,input().split())
matrix = [ list(map(int,input().split())) for i in range(R) ]
x,y = map(int,input().split())

x,y = x-1, y-1
l = []
s = []
for i in range(R):
    for j in range(C):
        if i == 0 or j == C-1:
            l.append(matrix[i][j])
        elif i == R-1 or j == 0:
            s.append(matrix[i][j])

n,m = len(l),len(s)
l += s[::-1]
z = n+m
temp = l[x%z]
l[x%z] = l[y%z]
l[y%z] = temp
l,s = l[:n],l[n:][::-1]

for i in range(R):
    for j in range(C):
        if i == 0 or j == C-1:
            print(l.pop(0),end=" ")
        elif i == R-1 or j == 0:
            print(s.pop(0),end=" ")
        else:
            print(matrix[i][j],end=" ")
    print()
