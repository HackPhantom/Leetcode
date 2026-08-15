class Solution:
    def rotateString(self, s: str, goal: str) -> bool:

        if len(s) != len(goal):
            return False

        sl = list(s)
        g = list(goal)

        for i in range(len(sl)):
            if g == sl[i:] + sl[0:i]:
                return True

        return False
        