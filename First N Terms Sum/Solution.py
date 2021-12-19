# RVS

n = int(input())

num = []
temp = []
x = 1
while(len(num) < n):
    temp += [x]
    num += temp
    x += 1

print(sum(num[:n]))
