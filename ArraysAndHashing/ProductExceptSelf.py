class Solution(object):
    def productExceptSelf(self, nums):
        mul = 1
        oneZero = False
        twoZeros = False
        index = -1
        for i in range(len(nums)):
            if(not oneZero and nums[i] == 0):
                oneZero = True
                index = i
                continue
            if(oneZero and nums[i] == 0):
                twoZeros = True
                oneZero = False
                break
            mul *= nums[i]
        result = []
        for i in range(len(nums)):
            if(oneZero):
                if(i != index):
                    result.append(0)
                    continue
                else:
                    result.append(mul)
                    continue
            if(twoZeros):
                result.append(0)
                continue
            result.append(mul/nums[i])
        return result

# Time Complexity: O(n)
# Space Complexity: O(1)