# LeetCode
class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        cookies = 0
        ate =[]
        g.sort()
        s.sort()
        # print(g,s)
        j = 0
        i = 0
        while True:
            if i >= len(g):
                break
            if j >= len(s):
                break
            # print(g[i],s[j])
            if s[j] >= g[i]:
                j += 1
                i += 1
                cookies += 1
            else:
                j += 1
            
        return cookies