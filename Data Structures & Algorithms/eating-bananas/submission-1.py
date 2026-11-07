class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        left, right = 1, max(piles)
        speed = right
        while left<=right:
            currspeed = (right+left)//2
            totaltime = 0
            for pile in piles:
                totaltime += math.ceil(pile/currspeed)
            if totaltime<=h:
                speed = currspeed
                right = currspeed - 1
            else:
                left = currspeed + 1
        return speed