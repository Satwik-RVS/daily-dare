# RVS

n,m = map(int,input().split())
matrix = [ list(map(int,input().split())) for i in range(n) ]

mini = maxi = matrix[0][0]
a = b = c = d = 0

for i in range(n):
    for j in range(m):
        if matrix[i][j] < mini:
            mini = matrix[i][j]
            a,b = i,j
        if matrix[i][j] > maxi:
            maxi = matrix[i][j]
            c,d = i,j

a,c = min(a,c),max(a,c)
b,d = min(b,d),max(b,d)

for i in range(a,c+1):
    for j in range(b,d+1):
        print(matrix[i][j], end=" ")
    print()
