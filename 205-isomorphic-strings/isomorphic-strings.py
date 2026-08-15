class Solution:

    def myFn(self , s):

        s_map = {}
        a = 1
        final = ""

        for i in s:
            if i not in s_map:
                s_map[i] = a
                final += str(a)
                final += " "
                a += 1
            else:
                final += str(s_map[i])
                final += " "
        return final


    def isIsomorphic(self, s: str, t: str) -> bool:

        a = self.myFn(s)
        b = self.myFn(t)

        if a == b:
            return True
        return False