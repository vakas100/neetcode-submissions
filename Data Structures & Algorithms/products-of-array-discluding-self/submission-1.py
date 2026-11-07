class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        output = []
        
        for i in range(len(nums)):
            product = 1
            for j,m in enumerate(nums):
                if j == i:
                    continue
                product *= m
            output.append(product)
        return output