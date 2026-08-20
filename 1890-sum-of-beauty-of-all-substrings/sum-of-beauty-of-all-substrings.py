class Solution:
    def beautySum(self, s: str) -> int:
        total_beauty = 0
        n = len(s)
        
        for i in range(n):
            freq = {}
            for j in range(i, n):
                char = s[j]
                freq[char] = freq.get(char, 0) + 1
                counts = freq.values()
                total_beauty += max(counts) - min(counts)
                
        return total_beauty
