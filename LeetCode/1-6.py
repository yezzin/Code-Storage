class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        lst = [[1]]
        t1 = [1,1]
        t2 = [1]
        if numRows == 2:
            lst.append(t1)
        elif numRows > 2:
            lst.append(t1)
            for i in range(3,numRows+1):
                t2 = [1]
                for j in range(len(t1)-1):
                    t2.append(t1[j]+t1[j+1])
                t2.append(1)
                t1 = t2
                lst.append(t1)
        
        return lst