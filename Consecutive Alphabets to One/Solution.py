# RVS

s = input().strip().lower()+'1'

n = len(s)
l = ""
for i in range(n-1):
    if s[i] == s[i+1] or (i > 0 and s[i] == s[i-1]):
        l += '1'
    else:
        l += '0'

print(int(l,2))
