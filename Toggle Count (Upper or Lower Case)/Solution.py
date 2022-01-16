# RVS

s = list(map(str,input().split()))

c = 0
for i in s:
    for j in range(1,len(i)):
        if i[j].isalpha() and i[j-1].isalpha() and i[j].isupper() != i[j-1].isupper():
            c += 1

print(c)
