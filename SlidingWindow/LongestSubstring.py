class Solution(object):
    def lengthOfLongestSubstring(self, s):
        sSet = set()
        subS = ""
        maxLen = 0
        for i in range(len(s)):
            if s[i] in sSet:
                while s[i] in sSet:
                    sSet.remove(subS[0])
                    subS = subS[1:]
                sSet.add(s[i])
                subS += s[i]
            else:
                sSet.add(s[i])
                subS += s[i]
            maxLen = max(maxLen,len(sSet))
        return maxLen