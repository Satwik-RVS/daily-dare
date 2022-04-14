# RVS

S = input().strip()

S = sorted(list(set(list(S))))
N = len(S)
temp = S[0]
l = []
for i in range(1, N):
    if ord(S[i]) - ord(S[i-1]) == 1:
        temp += S[i]
    else:
        l.append(temp)
        temp = S[i]
l.append(temp)

for ele in l:
    print(ele[0], ele[-1], sep = ":")
