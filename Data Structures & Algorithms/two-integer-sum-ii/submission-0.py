class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        st, end = 0, len(numbers)-1
        while(st<end):
            if numbers[st] + numbers[end] == target:
                return [st+1,end+1]
            elif numbers[st] + numbers[end] > target:
                end -= 1
            else:
                st += 1
