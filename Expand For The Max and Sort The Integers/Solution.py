# RVS

N = int(input())
arr = list(map(str,input().split()))

for i in range(N):
    
    a = list(arr[i])
    b = max(a)
    c = a.index(b)
    
    temp = arr[i][:c] + b*int(b) + arr[i][c+1:]
    arr[i] = int(temp)

arr = sorted(arr)

print(*arr, sep = " ")
