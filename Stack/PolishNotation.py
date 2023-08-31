class Solution(object):
    def evalRPN(self, tokens):
        result = 0
        stack = []
        for i in range(len(tokens)):
            if tokens[i].isdigit() or (len(tokens[i]) > 1 and tokens[i][1].isdigit()):
                stack.append(int(tokens[i]))
            else:
                op1 = stack.pop()
                op2 = stack.pop()
                if tokens[i] == '+':
                    result = (op1+op2)
                elif tokens[i] == '-':
                    result = (op2-op1)
                elif tokens[i] == '*':
                    result = (op1*op2)
                elif tokens[i] == '/':
                    result = int(float(op2)/op1) # float is needed for python 2.7 so that 6/-132 = 0 instead of -1
                stack.append(result)
        if len(stack) == 1 and result == 0:
            result = stack[0]
        return result