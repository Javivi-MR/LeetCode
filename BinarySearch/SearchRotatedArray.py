class Solution(object):
    def search(self, nums, target):
        i,j = 0, len(nums)-1
        while i <= j:
            mid = int((i+j+1)/2)
            if nums[mid] == target:
                return mid
            if nums[i] < nums[mid]:
                if target < nums[i] or target > nums[mid]:
                    i = mid+1
                else:
                    j = mid-1
            else:
                if target < nums[mid] or target > nums[j]:
                    j = mid-1
                else:
                    i = mid+1
        return -1