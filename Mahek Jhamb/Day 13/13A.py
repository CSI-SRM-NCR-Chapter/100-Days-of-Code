class Solution:
    def generate(self, numRows: int) -> list[list[int]]:
        list1=[]
        for i in range(numRows):
            level=[]
            for j in range(i+1):
                if j==0 or j==i:
                    level.append(1)
                else:
                    level.append(list1[i-1][j-1]+list1[i-1][j])
            list1.append(level)
        return list1