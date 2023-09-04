from ast import List
import math

class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        i, j = 1, max(piles)
        k = j
        while i <= j:
            mid = int((i+j)/2)
            counth = 0
            for it in piles:
                counth += math.ceil(it/mid)
                if mid == 3:
                    print(str(math.ceil(it/mid)) + " ")
            if counth <= h:
                k = min(k,mid)
                j = mid-1
            else:
                i = mid+1
        return k