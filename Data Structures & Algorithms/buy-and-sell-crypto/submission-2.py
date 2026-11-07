class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        buy = 10000
        sell = 0
        maxprofit = 0
        
        for i in range(len(prices)):
            sell = 0
            buy = min(buy, prices[i])
            sell = max(sell, prices[i])
            profit = sell - buy
            maxprofit = max(maxprofit, profit)

        return maxprofit 