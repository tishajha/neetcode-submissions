class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        l=1;
        r= max(piles)
        ans= r
        while l<=r :
            mid= l+(r-l)//2
            totalbanana=0
            for p in piles:
                totalbanana += (p+mid-1)//mid
            if totalbanana<= h:
                ans= mid
                r= mid-1
            else:
                l=mid+1
        return ans