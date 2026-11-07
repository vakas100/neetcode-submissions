class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        count = {}
        frequency = [[] for _ in range(len(nums)+1)]

        for n in nums:
            count[n] = count.get(n,0)+1

        for key,v in count.items():
            frequency[v].append(key)

        result = []
        for i in range(len(frequency)-1,0,-1):
            for n in frequency[i]:
                result.append(n)
                if len(result)==k:
                    return result
        