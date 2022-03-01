# RVS

arr = list(map(str,input().split()))

n = len(arr)
numarr = []
for i in range(n):
    currentstring = arr[i]
    num = ""
    for j in currentstring:
        if j.isdigit():
            num += j
    numarr.append([int(num), currentstring])

numarr = sorted(numarr, key = lambda x : x[0])
for i in range(n):
    print(numarr[i][1], end = " ")
