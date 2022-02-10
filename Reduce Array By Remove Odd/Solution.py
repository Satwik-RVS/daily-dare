# RVS

n = int(input())
l = list(map(int,input().split()))

while l:
    l = [ i//2 for i in l ]
    print(*l)
    l = [ i for i in l if i%2 == 0 ]
