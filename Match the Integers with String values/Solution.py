# RVS

n = int(input())

a,b = [],[]
alphabets = [ "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" ]
nums = [ str(i) for i in range(10) ]

for i in range(n):
    x,y = map(str,input().split())
    for j in range(len(alphabets)):
        if alphabets[j] in x:
            x = x.replace(alphabets[j], nums[j])
    a.append(x)
    b.append(y)

for i in range(n):
    print(b.index(a[i])+1, end=" ")
