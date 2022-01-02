# RVS

n = int(input())
sumi = sum(list(map(int,input().split())))

x = 1
while(x < sumi):
    x *= 2
print(x)
