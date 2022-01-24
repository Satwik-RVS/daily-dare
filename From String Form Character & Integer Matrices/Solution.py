# RVS

def displayer(l):
    global n
    m = len(l)//n
    k = m//n
    for i in range(n):
        for j in range(0,m,k):
            print(*l[:k],sep="",end=" ")
            l = l[k:]
        print()

string = input().strip()
n = int(input())

integers,alphabets = [],[]
for i in string:
    if i.isalpha():
        alphabets.append(i)
    else:
        integers.append(i)

displayer(integers)
displayer(alphabets)
