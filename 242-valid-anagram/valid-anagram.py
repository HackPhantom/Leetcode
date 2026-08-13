class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s_map = {}
        t_map = {}

        for i in s:
            if i not in s_map:
                s_map[i] = 1
            else:
                s_map[i] += 1

        for i in t:
            if i not in t_map:
                t_map[i] = 1
            else:
                t_map[i] += 1
        

        for i in s_map:
            if i in t_map and s_map[i] == t_map[i]:
                del t_map[i]
            else:
                return False
        
        if t_map == {}:
            return True

        return False
        