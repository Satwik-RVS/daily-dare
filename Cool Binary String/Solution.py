# RVS

s = input().strip()

n = len(s)
onesCount,zerosCount = s.count('1'),s.count('0')
if onesCount != zerosCount or s[0] != '1':
    print("No")
    exit(0)

onesCount,zerosCount = 1,0
for i in range(1,n):
    if s[i] == '1':
        onesCount += 1
    else:
        zerosCount += 1
    if onesCount < zerosCount:
        print("No")
        exit(0)

print("Yes")
