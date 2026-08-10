class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        open = 0
        close = 0
        L=[]
        for i in range(len(s)):
            if s[i] == "(":
                open += 1
            else:
                close += 1
            
            if open == 1 and close == 0:
                L.append(i)
            elif open == close:
                L.append(i)
                open = 0
                close = 0
        
        ans = ""

        for i in range(len(s)):
            if i not in L:
                ans += s[i]
        
        return ans
            
