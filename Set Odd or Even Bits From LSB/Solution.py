# RVS

N = int(input())

binary = list(bin(N)[2:][::-1])
binLen = len(binary)

x = 0
if(N%2 == 0):
    x += 1

for i in range(x,binLen,2):
    binary[i] = '1'

binary = "".join(binary[::-1])

print(int(binary,2))
