class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxprofit=0
        n=len(prices)
        cost=0
        minval= prices[0]
        if n==0:
            return 0
        for sell in prices:
            maxprofit= max(maxprofit, sell-minval)
            minval= min(minval, sell)
        return maxprofit