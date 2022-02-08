# RVS

n = int(input())

s = []
m = (2*n)-2
c = 1
x = '-'*m+'*'
print(x)
s.append(x)

l = ['*']*3
m -= 2

for i in range(n-2):
    x = '-'*m
    x += ("-"*c).join(l)
    print(x)
    s.append(x)
    m -= 2
    c += 2

print(*list('*'*(2*n-1)), sep = "-")
print(*s[::-1], sep = "\n")
