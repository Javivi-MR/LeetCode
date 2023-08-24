class Solution(object):
    def topKFrequent(self, nums, k):
        m = {}
        for n in nums:
            m[n] = m.get(n,0) + 1
        while len(m) > k:
            m.pop(min(m,key=m.get))
        return m.keys()
    
# Time complexity: O(n)
# Space complexity: O(n)