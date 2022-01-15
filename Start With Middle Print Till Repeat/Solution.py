# RVS

string = list(input().strip())

n = len(string)
i,j = (n//2)-1, (n//2)+1
s = [string[n//2]]

while i > -1:
    x,y = string[i],string[j]
    i -= 1
    j += 1
    if x in s:
        s.append(x)
        break
    if y in s:
        s.append(y)
        break
    s += [x,y]

print(*s)
