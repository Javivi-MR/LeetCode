#include <vector>
#include <iostream>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int i = 0;
    int k = matrix.size() - 1;
    while(i <= k)
    {
        int midi = (i + k) / 2;
        if(search(matrix[midi], target))
            return true;
        else if(matrix[midi][0] > target)
            k = midi - 1;
        else
            i = midi + 1;
    }
    return false;
}

bool search(vector<int>& nums, int target) {
    int index = -1;
    int i = 0; 
    int j = nums.size() - 1;

    while (i <= j) {
        int mid = (i + j) / 2;
        if (nums[mid] == target) {
            return true;
        }
        else if (nums[mid] > target) {
            j = mid - 1;
        }
        else {
            i = mid + 1;
        }
    }
    return false;
}