class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        freq_s= {}
        for i in range(len(s)):
            if s[i] not in freq_s:
                count = s.count(s[i])
                freq_s[s[i]] = count
            
        freq_t = {}
        for i in range(len(t)):
            if t[i] not in freq_t:
                count = t.count(t[i])
                freq_t[t[i]] = count 

        if freq_s == freq_t:
            return True
        return False