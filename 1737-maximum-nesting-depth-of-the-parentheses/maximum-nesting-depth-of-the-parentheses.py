class Solution:
    def maxDepth(self, s: str) -> int:

        level = 0
        max_level = 0

        for i in s:
            if i == "(":
                level += 1
                if level > max_level:
                    max_level = level
            
            elif i == ")":
                level -= 1
        
        return max_level

        