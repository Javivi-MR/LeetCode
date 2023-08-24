class Solution(object):
    def containsDuplicate(self, nums):
        nums = sorted(nums)
        for i in range(len(nums)-1):
            if nums[i] == nums[i+1]:
                return True
        return False

# Time complexity: O(nlogn)
# Space complexity: O(1)

# Method 2: set
class Solution(object):
    def containsDuplicate(self, nums):
        return len(set(nums)) != len(nums) 
    
# Time complexity: O(n)
# Space complexity: O(n)
