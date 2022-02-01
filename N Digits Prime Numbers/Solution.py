# RVS

def isprime(n):
    
    if n < 2:
        return 0
    for i in range(2,int(n**0.5)+1):
        if n%i == 0:
            return 0
    return 1

n = int(input())
l = list(map(str,input().split()))

s = []
for i in range(n):
    x = int(l[i])
    if isprime(x):
        s.append(x)
    for j in range(n):
        y = int(l[i]+l[j])
        if i != j and isprime(y):
            s.append(y)
        for k in range(n):
            z = int(l[i]+l[j]+l[k])
            if i != j != k != i and isprime(z):
                s.append(z)

print(*sorted(set(s)))
