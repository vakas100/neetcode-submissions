class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        count1 = {}
        window = {}

        for i in s1:
            count1[i] = count1.get(i,0)+1

        need = len(count1)
        for j in range(len(s2)):
            count2, curr = {}, 0
            for k in range(j, len(s2)):
                count2[s2[k]] = count2.get(s2[k],0) + 1
                if count1.get(s2[k],0) < count2[s2[k]]:
                    break
                if count1.get(s2[k],0) == count2[s2[k]]:
                    curr += 1
                if curr == need:
                    return True
        return False

        