class Solution:
    def separateDigits(self, nums: List[int]) -> List[int]:
        ans=[]
        for i in range(len(nums)):
            a=list(str(nums[i]))
            for j in range(len(a)):
                a[j]=int(a[j])
                ans.append(a[j])
        return ans    