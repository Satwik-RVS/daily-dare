# RVS

def isprime(n):
    if(n<2):
        return 0
    for i in range(2,int(n**0.5)+1):
        if n%i == 0:
            return 0
    return 1

def prevprime(n):
    n -= 1
    while(n > 0):
        if(isprime(n)):
            return n
        n -= 1
    return n

n,m = map(int,input().split())
zeros = [0 for k in range(m+2) ]
l = [zeros] + [ [0]+list(map(int,input().split()))+[0] for i in range(n) ] + [zeros]
mon = int(input())

for k in range(mon):
    temp = [zeros]
    for i in range(1,n+1):
        local = [0]
        for j in range(1,m+1):
            if isprime(l[i][j]):
                x = prevprime(l[i][j])
                local.append((2*l[i][j])-x)
            else:
                local.append(l[i][j-1]%10+l[i][j]+l[i][j+1]%10)
        temp.append(local+[0])
    temp.append(zeros)
    l = temp[::]

for i in l[1:-1]:
    print(*i[1:-1])
