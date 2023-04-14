class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        i=1
        arr=[[1]]
        while(i<numRows):
            j,k=0,0
            newrow=[]
            while(j<i and k<=i):
                if(j==0 and k==0):
                    newrow+=[1]
                    k+=1
                elif(k==i):
                    newrow+=[1]
                    j+=1
                else:
                    newrow+=[arr[i-1][j]+arr[i-1][k]]
                    j+=1
                    k+=1
            arr+=[newrow]
            i+=1
        return arr