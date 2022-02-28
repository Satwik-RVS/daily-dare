# RVS

m = int(input())
l = [ list(map(int,input().split())) for i in range(m) ]

n = 2
while n <= m:
    s = []
    for i in range(0,len(l[0]),n):
        temp = []
        for j in range(0,len(l),n):
            sumi = 0
            for a in range(i,i+n):
                for b in range(j,j+n):
                    sumi += l[a][b]
            temp.append(sumi)
        s.append(temp)
    for i in s:
        print(*i)
    n *= 2
