class Solution:
    def reverseWords(self, s: str) -> str:
        ans = ""
        L = s.split()
        for i in range(len(L)-1 , -1 , -1):
            ans += L[i]
            ans += " "
        
        return ans[:len(ans)-1]
        