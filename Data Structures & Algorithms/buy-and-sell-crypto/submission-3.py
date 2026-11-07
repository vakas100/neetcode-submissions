class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxprofit = 0
        buy = prices[0]
        for sell in prices:
            buy = min(buy,sell)
            profit = sell - buy
            maxprofit = max(maxprofit,profit)

        return maxprofit
        