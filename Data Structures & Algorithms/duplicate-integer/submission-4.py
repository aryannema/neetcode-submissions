class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        
        countEachEle = Counter(nums)

        for i in countEachEle:
            if countEachEle[i] > 1:
                return True

        return False