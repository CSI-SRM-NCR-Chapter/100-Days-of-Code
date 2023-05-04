class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        mp=defaultdict(int)
        ans=[]
        x=0
        for i in nums:
            mp[i]+=1
            if mp[i]==1:
                nums[x]=i
                x+=1
        return len(mp)