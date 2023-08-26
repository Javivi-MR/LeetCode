class Solution(object):
    def longestConsecutive(self, nums):
        s = set(nums)
        maxSequ = 0
        for i in nums:
            if (i-1) not in s:
        length = 0
                while((i+length) in s):
                    length += 1
                maxSequ = max(maxSequ,length)
         
        return maxSequ