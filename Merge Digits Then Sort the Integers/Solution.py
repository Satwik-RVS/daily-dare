# RVS

N = int(input())
array = list(map(str,input().split()))

newArray = []
for i in range(0, N-1, 2):
    x,y = list(array[i]), list(array[i+1])
    z = ""
    for j,k in zip(x,y):
        z += "".join(sorted([j,k])[::-1])
    newArray.append(int(z))

newArray.sort()
print(*newArray)
