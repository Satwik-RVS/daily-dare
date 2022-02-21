# RVS

string = list(map(str,input().split()))

a = [ "plus", "minus", "multiply", "divide" ]
b = [ "+", "-", "*", "//"]

n = len(string)
for i in range(1,n,2):
    string[i] = b[a.index(string[i])]

result = string[0]
for i in range(1,n,2):
    result = str(eval(result+string[i]+string[i+1]))

print(result)
