class Solution(object):
    def characterReplacement(self, s, k):
            frenq = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
            start, end = 0, 0
            maxLen, greater = 0, 0
            while end < len(s):
                frenq[ord(s[end])-ord('A')] += 1
                greater = max(greater,frenq[ord(s[end])-ord('A')])
                if (end-start+1) - greater > k:
                    frenq[ord(s[start])-ord('A')] -= 1
                    start += 1
                maxLen = max(maxLen,(end-start+1))
                end += 1
            return maxLen