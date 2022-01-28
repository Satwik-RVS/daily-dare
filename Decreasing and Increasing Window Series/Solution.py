# RVS

class RVS:
    
    def __init__(self, n, k):
        self.n = n
        self.k = k
    
    def forward(self, num):
        l = [ i for i in range(num, num+self.n) ]
        return l
    
    def backward(self, num):
        l = [ i for i in range(num+self.n-1, num-1, -1) ]
        return l
    
    def series(self):
        l = []
        c = 0
        temp = 1
        while(len(l) < self.k):
            if(c%2 == 0):
                l += self.forward(temp)
            else:
                l += self.backward(temp)
            temp += self.n
            c += 1
        return l[self.k-1]

n,k = map(int,input().split())

rvs = RVS(n,k)
print(rvs.series())
