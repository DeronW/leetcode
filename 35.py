class Solution:
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        l = len(nums)

        p1, p2 = 0, l

        while p1 != p2:
            p = int((p1 + p2)/2)
            if target > nums[p]:
                if p1 != p:
                    p1 = p
                else:
                    p1 += 1
            elif target < nums[p]:
                p2 = p
            else:
                return p

        return p1

if __name__ == '__main__':
    r = Solution().searchInsert([1,2,3], 2)
    print(r)