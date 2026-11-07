class Solution:
    def maxArea(self, heights: List[int]) -> int:
        left_wall, right_wall = 0, len(heights)-1
        max_area = 0
        while(left_wall < right_wall):
            wt = right_wall - left_wall
            ht = min(heights[left_wall],heights[right_wall])
            area = wt*ht
            max_area = max(max_area, area)
            if heights[left_wall] < heights[right_wall]:
                left_wall += 1
            else:
                right_wall -= 1
        return max_area