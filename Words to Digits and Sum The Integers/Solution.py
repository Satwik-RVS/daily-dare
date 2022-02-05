# RVS

n = int(input())
arr = list(map(str,input().split()))

intInWords = [ "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" ]
intInNumbers = [ str(i) for i in range(10) ]

sumi = 0
for i in range(n):
    x = arr[i]
    for j in range(10):
        if intInWords[j] in x:
            x = x.replace(intInWords[j], intInNumbers[j])
    sumi += int(x)

print(sumi)
