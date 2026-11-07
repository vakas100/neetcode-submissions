class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {}
        for i,n in enumerate(nums):
            required = target-n
            if required in seen:
                return[seen[required],i]
            seen[n] = i
