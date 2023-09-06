class Solution(object):
    def findMin(self, nums):
        i, j = 0 , len(nums)-1
        mini = nums[0]
        while i <= j:
            mid = int((i+j+1)/2)
            if nums[0] < nums[mid]:
                i = mid+1
            else:
                j = mid-1
                mini = min(nums[mid],mini)
        return mini