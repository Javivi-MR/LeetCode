class Solution(object):
    def searchMatrix(self, matrix, target):
        i, j = 0, len(matrix)-1
        while i <= j:
            mid = int((j + i) / 2)
            if search(matrix[mid],target):
                return True
            elif matrix[mid][0] > target:
                j = mid - 1
            else:
                i = mid + 1
        return False
        
def search(nums,target):
    i, j = 0, len(nums)-1
    while i <= j:
        mid = int((j + i) / 2)
        if nums[mid] == target:
            return True
        elif nums[mid] > target:
            j = mid - 1
        else:
            i = mid + 1
    return False