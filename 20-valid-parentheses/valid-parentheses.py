class Solution:
    def isValid(self, s: str) -> bool:

        L = []

        for i in s:
            if i == "(" or i == "{" or i == "[":
                L.append(i)
            
            elif i == ")":
                if len(L) == 0:
                    return False
                if L[-1] == "(":
                    L = L[:len(L)-1]
                else:
                    return False
            
            elif i == "}":
                if len(L) == 0:
                    return False
                if L[-1] == "{":
                    L = L[:len(L)-1]
                else:
                    return False

            elif i == "]":
                if len(L) == 0:
                    return False
                if L[-1] == "[":
                    L = L[:len(L)-1]
                else:
                    return False


        if len(L) != 0:
            return False
        return True

        
        