class Solution(object):
    def isAnagram(self, s, t):
        if len(s) != len(t):
            return False
        sMap = {}
        tMap = {}
        for it in range(len(s)):
            sMap[s[it]] = sMap.get(s[it],0) + 1
            tMap[t[it]] = tMap.get(t[it],0) + 1
        return sMap == tMap
    
# Time complexity: O(n)
# Space complexity: O(n)

# Method 2: sort

class Solution(object):
    def isAnagram(self, s, t):
        return sorted(s) == sorted(t)

# Time complexity: O(nlogn)
# Space complexity: O(1)