class Solution:  # 17.02.26
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        result = [0]*len(temperatures)
        stack = []

        for i,temp in enumerate(temperatures):
            while stack and temp>stack[-1][1]:
                last_idx,last_temp = stack.pop()
                result[last_idx] = i-last_idx
            stack.append((i,temp))
        return result