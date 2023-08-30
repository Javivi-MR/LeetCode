class Solution(object):
    def isValid(self, s):
        stack = []
        m = {')': '(' , ']': '[' , '}' : '{'}
        for i in s:
            if i == '(' or i == '[' or i == '{':
                stack.append(i)
            else:
                if len(stack) == 0 or m[i] != stack[len(stack)-1]:
                    return False
                stack.pop()
        if len(stack) > 0:
            return False
        return True