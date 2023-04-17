class Solution:
    def twoSum(self, numbers: list[int], target: int) -> list[int]:
        l,r=0,len(numbers)-1
        while(l<r):
            currsum=numbers[l]+numbers[r]
            if(currsum==target):
                return [l+1,r+1]
            elif (currsum>target):
                r-=1
            else:
                l+=1
