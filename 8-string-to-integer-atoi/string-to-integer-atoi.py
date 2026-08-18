class Solution:
    def myAtoi(self, s: str) -> int:
        
        s = s.strip()
        if s == "":
            return 0

        negative = False

        if s[0] == "-":
            negative = True
            s = s[1:]
        elif s[0] == "+":
            negative = False
            s = s[1:]

        if s == "":
            return 0
        
        i = 0
        while i<len(s) and s[i] == "0":
            i += 1
        
        if i == len(s):
            return 0
        
        s = s[i:]
        
        ans = 0
        for i in s:
            try:
                ans = ans*10 + int(i)
            except:
                break
            if negative == True and ans > pow(2,31):
                return -1 * pow(2,31)
            elif negative == False and ans > (pow(2,31) - 1):
                return pow(2,31) - 1
        
        if negative == True:
            return -1 * ans
        else:
            return ans