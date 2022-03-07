# RVS

def sumer(n):
    return sum([ int(i) for i in str(n) ])

n = int(input())

i = 10000
while( i < 100000 and sumer(i) < n):
    i += 1

if sumer(i) == n:
    print(i)
else:
    print(-1)
