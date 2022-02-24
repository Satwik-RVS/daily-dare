# RVS

s = input().strip()

if s == '1':
    print(1)
    exit(0)

while int(s,2) > 1:
    x = s.count('1')
    s = bin(x)
    print(x, end = " ")
