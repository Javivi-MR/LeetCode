class MinStack(object):

    def __init__(self):
        self.s = []
        self.mins = []

    def push(self, val):
        self.s.append(val)
        if len(self.s) == 1:
            self.mins.append(val)
        else:
            if self.mins[len(self.mins)-1] < val:
                self.mins.append(self.mins[len(self.mins)-1])
            else:
                self.mins.append(val)

    def pop(self):
        self.s.pop()
        self.mins.pop()
        

    def top(self):
        return self.s[len(self.s)-1]
        

    def getMin(self):
        return self.mins[len(self.mins)-1]