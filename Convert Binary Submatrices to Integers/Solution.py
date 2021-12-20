# RVS

n,m = map(int,input().split())
matrix = [ list(map(str,input().split())) for i in range(n) ]
k = int(input())

for i in range(0,n-k+1,k):
    for j in range(0,m-k+1,k):
        temp = []
        for a in range(i,i+k):
            temp += matrix[a][j:j+k]
        print(int("".join(temp),2),end=" ")
    print()
