class Solution(object):
    def twoSum(self, nums, target):
        for i in range(len(nums)):
            for j in range(i+1,len(nums)): 
                if nums[i] + nums[j] == target:
                    return [i,j]
                
# Time complexity: O(n^2)
# Space complexity: O(1)

# Method 2: hash table
class Solution(object):
    def twoSum(self, nums, target):
        m = {}
        for i in range(len(nums)):
            if target - nums[i] in m:
                return [m[target-nums[i]],i]
            m[nums[i]] = i

# Time complexity: O(n)
# Space complexity: O(n)