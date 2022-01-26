# RVS

class RVS:
    
    alphabets =  [ chr(i) for i in range(ord('a'), ord('z')+1) ]
    alphabets += alphabets*20
    def __init__(self, string, n):
        self.string =  string
        self.n = n
    
    def alpha(self, ch, length):
        index = self.alphabets.index(ch)
        if(len(self.alphabets) < length):
            while len(self.alphabets) < length:
                self.alphabets += self.alphabets
        word = self.alphabets[ index : index+length ]
        word = "".join(word)
        return word
    
    def identifier(self):
        s = ""
        c = 1
        for i in range(self.n-1):
            if self.string[i] != self.string[i+1]:
                if c == 1:
                    s += string[i]
                else:
                    s += self.alpha(self.string[i], c)
                c = 1
            else:
                c += 1
        if self.string[self.n-1] != self.string[self.n-2]:
            s += self.string[self.n-1]
        else:
            s += self.alpha(self.string[self.n-1], c)
        return s

string = list(input().strip())

n = len(string)

rvs = RVS(string, n)

print(rvs.identifier())
