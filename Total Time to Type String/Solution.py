# RVS

k = input().strip()
s = input().strip()

n = len(s)
count = 0
for i in range(1,n):
    count += abs(k.index(s[i])-k.index(s[i-1]))

print(count)
