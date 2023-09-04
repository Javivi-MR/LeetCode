#include <vector>

using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int i = 1;
        int j = findMaxValue(piles);
        int k = j;
        while (i <= j) {
            int mid = (i + j) / 2;
            long long counth = 0;
            for (int it = 0; it < piles.size(); it++) {
                counth += (piles[it] + mid - 1) / mid;
            }
            if (counth <= h) {
                k = min(k, mid);
                j = mid - 1;
            } else
                i = mid + 1;
        }
        return k;
    }

    int findMaxValue(vector<int>& piles) {
        int maxVal = -1;
        for (int i = 0; i < piles.size(); i++) {
            if (maxVal < piles[i])
                maxVal = piles[i];
        }
        return maxVal;
    }
};