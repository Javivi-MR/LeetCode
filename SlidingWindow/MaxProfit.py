lass Solution(object):
    def maxProfit(self, prices):
        profit = 0
        start, end = 0, 1
        while end < len(prices):
            if prices[end] - prices[start] > 0:
                profit = max(profit , prices[end] - prices[start])
            else:
                start = end
            end += 1
        return profit