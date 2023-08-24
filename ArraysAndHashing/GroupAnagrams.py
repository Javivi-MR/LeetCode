class Solution(object):
    def groupAnagrams(self, strs):
        m = {}
        for s in strs:
            key = ''.join(sorted(s))
            if key in m:
                m[key].append(s)
            else:
                m[key] = [s]
        return m.values()
    
# Time complexity: O(nmlogm)
# Space complexity: O(nm)