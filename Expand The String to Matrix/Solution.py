# RVS

class RVS:
    
    def __init__(self, n, m, matrix):
        
        self.n = n
        self.m = m
        self.matrix = matrix
    
    def seperator(self, string):
        s = ""
        for i in range(0,len(string),2):
            s += string[i]*int(string[i+1])
        return s
    
    def subMatrix(self, string):
        
        submat = []
        temp = []
        string = self.seperator(string)
        while(string):
            temp.append(string[0])
            string = string[1:]
            if len(temp) == 3:
                submat.append(temp)
                temp = []
        if len(temp) == 3:
            submat.append(temp)
        
        return submat
    
    def stringToMatrix(self):
        
        self.expandedMatrix = []
        for i in range(self.n):
            temp = []
            for j in range(self.m):
                temp.append(self.subMatrix(self.matrix[i][j]))
            temp = [ list(k) for k in zip(*temp) ]
            self.expandedMatrix.append(temp)
    
    def display(self):
        for i in self.expandedMatrix:
            for j in i:
                for k in j:
                    print(*k,end=" ")
                print()

n,m = map(int,input().split())
matrix = [ list(map(str,input().split())) for i in range(n) ]

rvs = RVS(n, m, matrix)

rvs.stringToMatrix()

rvs.display()
