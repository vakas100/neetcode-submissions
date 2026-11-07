class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        output = []
        for i in range(len(nums)-2):
            target = -nums[i]
            st, end = i+1, len(nums)-1
            while(st < end):
                if nums[st] + nums[end] == target:
                    if [nums[i],nums[st],nums[end]] not in output:
                        output.append([nums[i],nums[st],nums[end]])
                    st+=1
                    end-=1
                elif nums[st] + nums[end] > target:
                    end -= 1
                else:
                    st += 1
        return output


            
