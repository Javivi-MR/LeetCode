class Solution(object):
    def firstMissingPositive(self, nums):
        s = set()
        n = len(nums)
        for i in range(n):
            if nums[i] > 0 and nums[i] <= n:
                s.add(nums[i])
        for i in range(1,n+2):
            if i not in s:
                return i
        