class Solution(object):
    def maxArea(self, height):
        maxi = -1
        start = 0
        end = len(height) - 1
        for i in range(len(height)):
            if height[start] > height[end]:
                maxi = max(maxi,height[end]*(end-start))
                end -= 1
            else:
                maxi = max(maxi,height[start]*(end-start))
                start += 1
        return maxi