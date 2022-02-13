# RVS

count = 0
def replacer(s):
    global count
    if '_' in s:
        for i in range(0,10):
            x = s[::]
            x = x.replace("_",str(i),1)
            replacer(x)
    else:
        if s[0] != '0' or len(s) == 1:
            s = int(s)
            if s%25 == 0:
                count += 1

s = input().strip()

if s[0] == '0':
    if len(s) == 1:
        print(1)
    else:
        print(0)
    exit(0)

if 'X' in s:
    for i in range(0,10):
        x = s.replace('X',str(i))
        if '_' in x:
            replacer(x)
        else:
            if x[0] != 0 or len(x) == 1:
                if int(x)%25 == 0:
                    count += 1
else:
    replacer(s)

print(count)
