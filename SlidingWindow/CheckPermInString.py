class Solution(object):
    def checkInclusion(self, s1, s2):
        start, end = 0, 0
        frenq, frenqCpy = [0]*26,[0]*26
        for i in range(len(s1)):
            frenq[ord(s1[i])-ord('a')] += 1
            frenqCpy[ord(s1[i])-ord('a')] += 1
        while end < len(s2):
            if frenq[ord(s2[end])-ord('a')] == 0:
                if frenqCpy[ord(s2[start])-ord('a')] > 0:
                    frenq[ord(s2[start])-ord('a')] += 1
                    start +=1
                else:
                    start += 1
                    end = start
            else:
                frenq[ord(s2[end])-ord('a')] -= 1
                end += 1
            if frenq.count(0) == 26:
                return True
        return False