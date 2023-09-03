class Solution(object):
    def search(self, nums, target):
        i = 0
        j = len(nums) - 1
        while i <= j:
            mid = (j + i) / 2
            if nums[mid] == target:
                return mid 
            elif nums[mid] > target:
                j = mid - 1
            else:
                i = mid + 1
        return -1