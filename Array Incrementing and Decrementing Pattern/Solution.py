# RVS

N = int(input())
arr = list(map(int,input().split()))
T = int(input())

temp = arr[::]
flags = [ 1 for i in range(N) ]

i = 0
for count in range(T):
    
    if flags[i] == 1:
        temp[i] -= 1
    else:
        temp[i] += 1
    
    if temp[i] == 0:
        flags[i] = 0
    if temp[i] == arr[i]:
        flags[i] = 1
    
    i += 1
    if i >= N:
        i = 0
    
    print(*temp)
