# RVS

n,m = map(int,input().split())
matrix = [ list(map(str,input().split())) for i in range(n) ]
k = int(input())

if k > 0:
    for i in range(n):
        for j in range(m):
            for x in range(k):
                print(matrix[i][j], end = " ")
        print()
else:
    k *= -1
    for i in range(n):
        for x in range(k):
            for j in range(m):
                print(matrix[i][j], end = " ")
            print()
