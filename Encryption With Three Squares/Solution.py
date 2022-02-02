# RVS

s1 = list(input().strip())
s2 = list(input().strip())

s = []
while s2:
    temp = []
    for i in range(3):
        temp += [s2[:3]]
        s2 = s2[3:]
    s.append(temp)

for ele in s1:
    for i in range(len(s)):
        for j in range(3):
            for k in range(3):
                if s[i][j][k] == ele:
                    print(i+1,j+1,k+1,sep="",end="")
                    break
