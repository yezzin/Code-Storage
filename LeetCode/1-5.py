class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        # int list to string list
        s = [str(i) for i in digits]
        # join str list and convert to int
        d = int("".join(s))
        
        d += 1  # problem solving
        
        # int -> str -> str lst -> int lst
        reslt = list(map(int, str(d)))
        
        return reslt    