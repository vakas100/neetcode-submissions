class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        longest,length = 0,0
        numset = set(nums)
        if len(numset)==0:
            return longest
        longest += 1

        for num in numset:
            if num-1 not in numset:
                length = 1
                while num+length in numset:
                    length += 1
                    longest = max(length,longest)
        
        return longest