# RVS

def indexer(x):
    global r,c,matrix
    for i in range(r):
        for j in range(c):
            if matrix[i][j] == x:
                matrix[i][j] = -1
                return i+1,j+1

r,c = map(int,input().split())
matrix = [ list(map(int,input().split())) for i in range(r) ]

temp = []
for i in matrix:
    temp += i
sortedTemp = sorted(temp)

l = []
i = 0
for j in range(r):
    l.append(sortedTemp[i:i+c])
    i += c

for i in range(r):
    for j in range(c):
        print(*indexer(l[i][j]),sep="-",end=" ")
    print()
