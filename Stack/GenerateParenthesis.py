class Solution(object):
    def generateParenthesis(self, n):
        open,close = 1,0
        string = "("
        result = []
        build(open,close,string,result,n)
        return result
    
def build(open,close,string,result,n):
    if len(string) == n*2:
        result.append(string)
    if open < n:
        build(open+1,close,string+'(',result,n)
    if close < open:
        build(open,close+1,string+')',result,n)