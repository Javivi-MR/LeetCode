class Solution(object):
    def trap(self, height):
        start, end = 0, len(height)-1
        maxS, maxE = height[0],height[len(height)-1]
        traps = 0
        while start < end:
            if maxS < maxE:
                start += 1
                if maxS - height[start] > 0:
                    traps += maxS - height[start]
                maxS = max(maxS,height[start])
            else:
                end -= 1
                if maxE - height[end] > 0:
                    traps += maxE - height[end]
                maxE = max(maxE,height[end])
        return traps