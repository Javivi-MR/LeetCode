class Solution(object):
    def twoSum(self, numbers, target):
        start, end = 0, len(numbers)-1
        while numbers[start] + numbers[end] != target:
            if numbers[start] + numbers[end] > target:
                end -= 1
            else:
                start += 1
        return [start+1,end+1]