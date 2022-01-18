# RVS

def returner(l):
    d = {}
    for i in l:
        for j in str(i):
            if j not in d:
                d[j] = 0
            d[j] += 1
    return d

l1 = list(map(int,input().split()))
l2 = list(map(int,input().split()))

s1,s2 = returner(l1),returner(l2)
if len(l1) == len(l2) and s1 == s2:
    print("YES")
    print(sum(l1),sum(l2))
else:
    print("NO")
