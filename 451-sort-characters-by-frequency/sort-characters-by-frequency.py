class Solution:
    def frequencySort(self, s: str) -> str:

        freq = {}

        for i in s:
            if i not in freq:
                freq[i] = 1
            else:
                freq[i] += 1

        final = dict(sorted(freq.items() , key = lambda item: item[1] , reverse = True))

        ans = ""
        for i in final:
            ans += i * final[i]
        
        return ans

        
        