class Solution(object):
    def dailyTemperatures(self, temperatures):
        stack = []
        result = [0] * len(temperatures)
        for i in range(len(temperatures)):
            if i == 0:
                stack.append([temperatures[i],i])
            else:
                while len(stack) > 0 and stack[-1][0] < temperatures[i]:
                    temp,ind = stack.pop()
                    result[ind] = (i-ind)
                stack.append([temperatures[i],i])
        return result