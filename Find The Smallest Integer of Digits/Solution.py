# RVS

n = int(input())
l = list(map(str,input().split()))
k = input().strip()

sumi = 0
for i in k:
    mini = []
    for j in l:
        if i in j:
            mini.append(int(j))
    if not mini:
        mini.append(0)
    sumi += min(mini)

print(sumi)
