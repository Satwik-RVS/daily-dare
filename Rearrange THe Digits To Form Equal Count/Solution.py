# RVS

n = int(input())
l = list(map(str,input().split()))

lens = [ len(i) for i in l ]
sortLens = sorted(lens)
x = lens.index(sortLens[0])
y = lens.index(sortLens[n - 1])
z = (sortLens[n-1] - sortLens[0])//2

l[x] += l[y][-z:]
l[y] = l[y][:-z]
l = [ int(i) for i in l]

print(*l)
print(sum(l))
