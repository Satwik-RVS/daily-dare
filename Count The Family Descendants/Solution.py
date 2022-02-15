# RVS

count = 1
d = {}

def finder(s):
    global count
    global d
    if s in d:
        count += len(d[s])
        for i in d[s]:
            finder(i)

n = int(input())

for i in range(n):
    x,y = map(str,input().split())
    if y not in d:
        d[y] = []
    d[y] += [x]

s = input().strip()
finder(s)

print(count)
