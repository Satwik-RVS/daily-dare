# RVS

S = input().strip()

for i in range(1,len(S)):
    x,y = S[:i],S[i:]
    if x == x[::-1] and y == y[::-1]:
        print(x,y,sep="\n")
        exit(0)
