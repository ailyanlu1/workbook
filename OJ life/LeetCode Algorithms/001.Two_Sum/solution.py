class Solution:
    def twoSum(self, nums, target):
        l = len(nums)
        snums = set(nums)
        dnums = nums[::-1]
        for k,v in enumerate(nums):
            if target-v in snums:
                k2 = l - dnums.index(target-v) - 1
                if k != k2:
                    return (min(k+1,k2+1),max(k+1,k2+1))


a = [3,2,4]
b = 6
s = Solution()
print(s.twoSum(a, b))
