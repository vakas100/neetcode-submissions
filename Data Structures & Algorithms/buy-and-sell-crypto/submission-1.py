class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxprofit = 0
        buy = 10000
        sell = 0
        
        for i,p in enumerate(prices):
            if p <= buy:
                buy = p
            for r in range(i+1,len(prices)):
                sell = 0
                if prices[r] >= sell:
                    sell = prices[r]
                    profit = sell - buy
                    maxprofit = max(maxprofit, profit)
                else:
                    continue

        return maxprofit
